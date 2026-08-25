#include <stdio.h>

int main() {
  int a = 10; // 0000 1010
  int b = 12; // 0000 1100

  printf("and: %d\n", a & b);// 0000 1000
  printf("or: %d\n", a | b);// 0000 1110
  printf("xor: %d\n", a ^ b);// 0000 0110
  printf("not: %d\n", ~a);// 1111 0101
  printf("left shift: %d\n", a << 1);// 0001 0100
  printf("right shift: %d\n", a >> 1);// 0000 0101

  return 0;
}

// and: 8
// or: 14
// xor: 6
// not: -11
// left shift: 20
// right shift: 5