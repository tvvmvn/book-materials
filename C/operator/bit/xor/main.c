#include <stdio.h>

int main() {
  int a = 10; // 0000 1010
  int b = 12; // 0000 1100

  printf("xor: %d\n", a ^ b);// 6  (0000 0110)

  return 0;
}