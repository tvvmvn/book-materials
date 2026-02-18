#include <stdio.h>

int main() {
  int a = 10; // 0000 1010

  printf("%d\n", a << 1);//20 (0001 0100)
  printf("%d\n", a >> 1);//5 (0000 0101)
}