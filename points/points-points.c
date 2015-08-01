#include <stdio.h>

int main(int argc, char const *argv[]) {
  /* code */

  int a;
  int *aa;
  int * *aaa;


  aaa=&aa;

  *aaa=&a;

  printf("a  :%d\n",a );
  printf("&a :%p\n",&a );

  printf("--------\n");
  printf("aa :%p\n",aa );
  printf("&aa:%p\n",&aa );
  printf("*aa:%d\n",*aa );

  printf("--------\n");

  printf("aaa :%p\n",aaa );
  printf("&aaa:%p\n",&aaa );
  printf("*aaa:%p\n",*aaa );
  //printf("**aaa:%p\n",**aaa );


  return 0;
}
