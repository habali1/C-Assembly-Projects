#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef enum { ROCK, PAPER, SCISSORS } rps;

rps player_habali1(int round, rps *myhist, rps *opphist);

rps player_habali1(int round, rps *myhist, rps *opphist) {
    if (round == 0) {
        srand((unsigned int)time(NULL));
    }

    return (rps)(rand() % 3);
}
