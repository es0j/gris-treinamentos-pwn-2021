#include <stdio.h>


//gcc -o example1 example1.c -no-pie -fno-stack-protector


int hello(){
  printf("hello world");
}

int main(){
  hello();
  return 2;
}
