#include <stdio.h>

// pointer args
void f(int* ptr) {
  *ptr = 10;
}

int main() {
  int n = 2;

  f(&n);

  printf("%d", n); //10
}