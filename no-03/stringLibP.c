#include "stringLib.h"


int stringLength(char  *a) {
  char *start = a;
  while (*a) {  // burda pointer olarak kullaniyoruz a demek girilen
    // ne yazarsan yaz fark etmez buraya a sadece ilk harf diye
    //sonra da teker teker a yi arttiriyo a direkt burda girilen seyin ilk
    //harfi olarak gozukuyo ex: Hello da a++ yapilirsa ello olarak kaliyo.
    
    a++;
  }
  return a - start; // Bu da bize baslangicla sonun farkini veriyo

}

void stringCopy(char *a,char *b) {
  while ((*a++ = *b++) != '\0');
  // burda da b yi tamamen a ya geciriyo bitene kadar yani '\0' la karsilasana
  //kadar
}

void stringCat(char *a,char *b) {
  while (*a){
    a++;
  }
  while ((*a++ = *b++) != '\0');

}
