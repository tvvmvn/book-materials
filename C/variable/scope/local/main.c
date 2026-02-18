#include <stdio.h>

void f() {
  int x = 2;

  printf("%d\n", x);
}

int main() {
  // error
  // printf("%d", x);

  return 0;
}
