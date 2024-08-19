#include "bitFields.h"
#include <assert.h>

int getBit(int bn,unsigned long val) {
	assert(bn>=0 && bn<64);
	if (1UL<<bn & val) return 1;
	return 0;
}

void setBit(int bn,int new,unsigned long *val) {
	assert(bn>=0 && bn<64);
	if (new) (*val)|=1UL<<bn;
	else (*val)&=~(1L<<bn);
}

long getBitFld(int bs,int len,unsigned long val) {
    assert(bs >= 0 && bs < 64);
    len = (bs + len > 64) ? 64 - bs : len;
    assert(len > 0); 

    unsigned long mask = (1UL << len) - 1;
    long result = ((val >> bs) & mask);

    if (len < 64 && (result & (1L << (len - 1)))) {
        result |= (~0UL << len);
    }

    return result;
}

unsigned long getBitFldU(int bs,int len,unsigned long val) {
    assert(bs >= 0 && bs < 64);
    
    len = (bs + len > 64) ? 64 - bs : len;
    assert(len > 0); 

    unsigned long mask = (1UL << len) - 1;
   
    return (val >> bs) & mask;
}

void setBitFld(int bs,int len,unsigned long new,unsigned long *val) {
    assert(bs >= 0 && bs < 64);
    len = (bs + len > 64) ? 64 - bs : len;
    assert(len > 0);

    unsigned long mask = (1UL << len) - 1;
    new = (new & mask) << bs;
    *val &= ~(mask << bs);
    *val |= new;
}
