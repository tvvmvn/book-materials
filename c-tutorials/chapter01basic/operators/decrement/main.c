#include <stdio.h>

int main() {
  int a = 1;
  int b = 1;

  printf("a=%d, b=%d\n", --a, b--);

  printf("a=%d, b=%d\n", a, b);
}

//a=0, b=1
//a=0, b=0