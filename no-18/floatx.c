#include "floatx.h"
#include <assert.h>
#include <limits.h> 
#include <math.h> 

floatx doubleToFloatx(double val,int totBits,int expBits) {
// assertions
	assert (totBits >=3 && totBits <=64);
	assert (expBits >=1 && expBits <= totBits - 2);

	int fracBits = totBits - expBits -1; 

	const int doubleExpBits = 11;
    const int doubleMantissaBits = 52;

    const unsigned long doubleExpMask = ((1UL << doubleExpBits) - 1) << doubleMantissaBits;
    const unsigned long doubleMantissaMask = (1UL << doubleMantissaBits) - 1;

	union hexDouble {
		double dbl;
		long lng;
	} unionVal;
	unionVal.dbl = val;

    unsigned long sign = unionVal.lng >> 63;
    int exponent = (int)((unionVal.lng & doubleExpMask) >> doubleMantissaBits) - 1023;
    unsigned long mantissa = unionVal.lng & doubleMantissaMask;

	int floatxBias = (1 << (expBits - 1)) - 1;
    
    exponent += floatxBias;

    floatx floatxVal = 0; 

// algorithm

	if (val==0) {
		return floatxVal;
	}
	// if it is INF
	if (isinf(val)){
		floatxVal = (sign << (totBits - 1) ) | (exponent >= (1 << expBits) ? ((1UL << expBits) - 1) << fracBits : exponent << fracBits);
		return floatxVal;
	}
	// if it is NAN value
    if (isnan(val)){
		floatxVal = (sign << (totBits - 1)) | ((1UL << expBits) - 1) << fracBits | (1UL << (fracBits - 1));
		return floatxVal;	
	}
    // SUBNORMAL numbers couldn't figure out what is wrong
    if (exponent < 0) {
        if (exponent < -fracBits) {

            return sign << (totBits - 1);
        } else {

            int shiftAmount = 1 - exponent;
            mantissa >>= shiftAmount;
            exponent = 0;
        }
    } else {
        if (fracBits < doubleMantissaBits) {
            mantissa >>= (doubleMantissaBits - fracBits);
        } else if (fracBits > doubleMantissaBits) {
            mantissa <<= (fracBits - doubleMantissaBits);
        }


        if (exponent >= (1 << expBits)) {
            return (sign << (totBits - 1)) | ((1UL << expBits) - 1) << fracBits;
        }
    }

    // Assambling float numbers
    floatxVal = (sign << (totBits - 1)) | (exponent << fracBits) | mantissa;
    return floatxVal;
}