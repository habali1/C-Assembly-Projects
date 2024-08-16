#include "stringLib.h"

// All comment brackets are for me to remember what I've done. They are in Turkish.

int stringLength(char a[]) {
  int length = 0;
  while (a[length] != '\0'){  //uzunlugunu aliyor burda.
    length++;
  }
  return 0;
}

void stringCopy(char a[],char b[]) {
  int i = 0;
    while ((a[i]=b[i]) != '\0'){ //Burda direkt b dekini a ya kopyaliyor.
    i++;
  }
}


void stringCat(char a[],char b[]) {
  int lenA = stringLength(a);
  int i = 0;
  while ((a[lenA + i] = b[i]) != '\0'){ //a= "hello" b de " world",a nin sonuna b yi ekliyor.= "hello world"
    i++;
  }
}

