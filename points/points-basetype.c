#include <stdio.h>

int main(int argc, char const *argv[]) {
  /* 基本类型 */
  printf("-----basetype\n");
  int a=12;
  int b;
  printf("int a address:%p,value:%d\n", &a,a);
  printf("int b address:%p,value:%d\n", &b,b);
  b=a;
  printf("Assignment after\n");

  printf("int a address:%p,value:%d\n", &a,a);
  printf("int b address:%p,value:%d\n", &b,b);

  //结论:基本类型是赋值操作

  printf("-----points\n");
  struct Person{
    int age;
    char * name;
  };

  struct Person zhangshang;
  struct Person lishi;

  printf("zs strut address:%p,age:%d,name:%s\n", &zhangshang,zhangshang.age,zhangshang.name);
  printf("ls strut address:%p,age:%d,name:%s\n", &lishi,lishi.age,lishi.name);

  printf("-----\n");
  zhangshang.age=12;
  char name[2]={'z','s'};
  zhangshang.name=name;

  printf("zs strut address:%p,age:%d,name:%s\n", &zhangshang,zhangshang.age,zhangshang.name);
  printf("ls strut address:%p,age:%d,name:%s\n", &lishi,lishi.age,lishi.name);

  printf("-----\n");
  lishi=zhangshang;
  //
  printf("zs strut address:%p,age:%d,name:%s\n", &zhangshang,zhangshang.age,zhangshang.name);
  printf("ls strut address:%p,age:%d,name:%s\n", &lishi,lishi.age,lishi.name);

  printf("-----\n");
  struct Person *ww;
  ww=&lishi;
  printf("zs strut address:%p,age:%d,name:%s\n", &zhangshang,zhangshang.age,zhangshang.name);
  printf("ls strut address:%p,age:%d,name:%s\n", &lishi,lishi.age,lishi.name);
  printf("ww strut address:%p,age:%d,name:%s\n", ww,ww->age,(*ww).name);



  return 0;
}
