#include <stdio.h>

int main() {
  int a = 1;
  int b = a++;

  printf("a=%d, b=%d\n", a, b);//a=2, b=1
}