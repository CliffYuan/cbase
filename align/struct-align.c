#include <stdio.h>

int main(int argc, char const *argv[]) {
  /* code */

  struct ALIGN{
     char a;
     int b;
     char c;
  }a1;

  struct ALIGN2{
     int a;
     char b;
     char c;
  }a2;


  printf("%l\n",sizeof(int) );
  //printf("sizeof ALIGN %l\n",sizeof(ALIGN));
  //printf("sizeof ALIGN2 %l\n",sizeof(ALIGN2));


  return 0;
}
