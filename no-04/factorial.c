#include <stdio.h>
//For char
void calc_fac_char(){
  char n = 1;
  char fact = 1;
  while (1){
    char next_fact = fact * n;
    if (next_fact / n !=fact){
      break;
    }
    fact = next_fact;
    n++;
  }
  printf("The longest factorial that char represent: %d! = %d\n", n-1, fact);
}

//For unsigned char
void calc_fac_uns_char(){
  unsigned char n = 1;
  unsigned char fact = 1;
  while (1){
    unsigned char next_fact = fact *n;
    if (next_fact / n != fact){
      break;
    }
    fact = next_fact;
    n++;
  }
  printf("The largest factorial that 'unsigned char' can represent is: %d! = %u\n", n-1, fact);
}

//For int
void calc_fac_int(){
  int n = 1;
  int fact = 1;
  while(1){
    int next_fact = fact * n;
    if (next_fact / n != fact){
      break;
    }
    fact = next_fact;
    n++;
  }
  printf("The largest factorual that 'int' can represent is: %d! = %d\n", n-1, fact);
}

//For short
void calc_fac_short(){
  short n = 1;
  short fact = 1;
  while(1){
    short next_fact = fact * n;
    if (next_fact / n != fact){
      break;
    }
    fact = next_fact;
    n++;
  }
  printf("The largest factorial that 'short' can represent is: %d! = %d\n", n-1, fact);
}

//For unsigned short
void calc_fac_uns_short() {
    unsigned short n = 1;
    unsigned short fact = 1;
    while (1) {
        unsigned short next_fact = fact * n;
        if (next_fact / n != fact) { 
            break;
        }
        fact = next_fact;
        n++;
    }
    printf("The largest factorial that 'unsigned short' can represent is: %d! = %u\n", n - 1, fact);
}

//For unsigned int
void calc_fac_uns_int() {
    unsigned int n = 1;
    unsigned int fact = 1;
    while (1) {
        unsigned int next_fact = fact * n;
        if (next_fact / n != fact) {
            break;
        }
        fact = next_fact;
        n++;
    }
    printf("The largest factorial that 'unsigned int' can represent is: %d! = %u\n", n - 1, fact);
}

//For long
void calc_fac_long() {
    long n = 1;
    long fact = 1;
    while (1) {
        long next_fact = fact * n;
        if (next_fact / n != fact) {
	  break;
        }
        fact = next_fact;
        n++;
    }
    printf("The largest factorial that 'long' can represent is: %ld! = %ld\n", n - 1, fact);
}

//For unsigned long
void calc_fac_uns_long() {
    unsigned long n = 1;
    unsigned long fact = 1;
    while (1) {
        unsigned long next_fact = fact * n;
        if (next_fact / n != fact) {
            break;
        }
        fact = next_fact;
        n++;
    }
    printf("The largest factorial that 'unsigned long' can represent is: %lu! = %lu\n", n - 1, fact);
}

int main() {
  calc_fac_char();
  calc_fac_uns_char();
  calc_fac_int();
  calc_fac_short();
  calc_fac_uns_short();
  calc_fac_uns_int();
  calc_fac_long();
  calc_fac_uns_long();
  return 0;

  
}
