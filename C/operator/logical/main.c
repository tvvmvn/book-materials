#include <stdio.h>

int main() {

  int a = 1 > 0;
  int b = 1 < 0;

  printf("%d\n", a && b); // 0
  printf("%d\n", a || b); // 1
  printf("%d\n", !b); // 1
}