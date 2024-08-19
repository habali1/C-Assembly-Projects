

/*---------------------------------------------------------
   Internal Function Definitions
---------------------------------------------------------*/


#include "warehouse.h"
#include "packer.h"
#include <stdio.h>
#include <stdlib.h>

/*---------------------------------------------------------
   Global Declarations
---------------------------------------------------------*/
#define HISTORY_SIZE 1000  // Adjust size as needed

typedef struct {
    int binNum;
    int lastUsedIndex;
} BinStatus;

// Assuming NUMSLOTS is the number of slots on the workbench
BinStatus benchStatus[NUMSLOTS];
int partHistory[HISTORY_SIZE];  // Ring buffer to keep track of recent parts

/*---------------------------------------------------------
   Internal Function Declarations
---------------------------------------------------------*/
void initializeWorkbench();
int findLeastRecentlyUsedBin();
void updatePartHistory(int partNumber, int index);
int findIndexOfPart(int partNumber);

/*---------------------------------------------------------
	External Function Definitions
---------------------------------------------------------*/

void processPart(int partNumber) {
    int binNumber = binFromPart(partNumber);
    int currentPartIndex = partIndex();
    
    // Update part history
    updatePartHistory(partNumber, currentPartIndex);
    
    // If the bin is already on the workbench, just return.
    if (onBench(binNumber)) {
        // Update last used index
        for (int i = 0; i < NUMSLOTS; i++) {
            if (benchStatus[i].binNum == binNumber) {
                benchStatus[i].lastUsedIndex = currentPartIndex;
                break;
            }
        }
        return;
    }
    
    // Find the least recently used bin to replace
    int slotToReplace = findLeastRecentlyUsedBin();
    
    // Replace the bin in the chosen slot
    getBin(binNumber, slotToReplace);
    
    // Update bench status
    benchStatus[slotToReplace].binNum = binNumber;
    benchStatus[slotToReplace].lastUsedIndex = currentPartIndex;
}

/*---------------------------------------------------------
   Internal Function Definitions
---------------------------------------------------------*/

void initializeWorkbench() {
    for (int i = 0; i < NUMSLOTS; i++) {
        benchStatus[i].binNum = -1;
        benchStatus[i].lastUsedIndex = -1;
    }
    for (int i = 0; i < HISTORY_SIZE; i++) {
        partHistory[i] = -1;
    }
}

int findLeastRecentlyUsedBin() {
    int lruIndex = 0;
    int minIndex = partIndex();
    
    for (int i = 0; i < NUMSLOTS; i++) {
        if (benchStatus[i].lastUsedIndex < minIndex) {
            minIndex = benchStatus[i].lastUsedIndex;
            lruIndex = i;
        }
    }
    
    return lruIndex;
}

void updatePartHistory(int partNumber, int index) {
    int historyIndex = index % HISTORY_SIZE;
    partHistory[historyIndex] = partNumber;
}

int findIndexOfPart(int partNumber) {
    for (int i = 0; i < HISTORY_SIZE; i++) {
        if (partHistory[i] == partNumber) {
            return i;
        }
    }
    return -1;
}
