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
}