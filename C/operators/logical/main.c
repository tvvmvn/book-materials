#include <stdio.h>

int main() {
  int a = 1 > 0;
  int b = 1 < 0;

  printf("%d\n", a && b);
  printf("%d\n", a || b);
  printf("%d\n", !b);
}

// 0
// 1
// 1