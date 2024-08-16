#include <stdio.h>
#include <stdlib.h> // for atoi

int main(int argc, char *argv[]) {
  int sum=0;
  for (int i=1; i<argc; i++) {
    int num= atoi(argv[i]);
    sum+=num;
  }
  for (int i=1; i< argc; i++){
    if (i>1){
      printf(" + %d", atoi(argv[i]));
    }else {
	printf("%d", atoi(argv[i]));
      }
  }
    printf("= %d\n", sum);

    return 0;
    /* TODO:
			Read arguments 1 to argc-1.
			Convert each argument string to an integer value (use the C "atoi" library function.)
			Print each argument's converted value
			Calculate and print the sum of all the argument values
			So, if invoked as "./addArgs 1 2 3", you will print "sum of 1 + 2 + 3 = 6"
				Don't forget a newline at the end of your output.
	*/
}
