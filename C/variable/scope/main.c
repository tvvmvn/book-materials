#include <stdio.h>

// global;
int a = 1;

void f() {
  // b belongs to f()
  int b = 2;
}

int main() {
  printf("%d\n", a);
  // printf("%d\n", b); // error

  return 0;
}

//1