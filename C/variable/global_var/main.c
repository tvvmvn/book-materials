#include <stdio.h>

int x = 2;

void f() {
  printf("%d\n", x);
}

int main() {
  f();
  printf("%d", x);

  return 0;
}

// 2
// 2