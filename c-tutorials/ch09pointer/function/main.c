#include <stdio.h>
#include <stdlib.h>

void f(int* ptr, int n) {
  *ptr = 100;
  n = 100;
}

int main() {
  int x = 1;
  int y = 1;

  f(&x, y);

  printf("%d, %d\n", x, y); 
}
