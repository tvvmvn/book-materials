#include <stdio.h>
#include <stdlib.h>

// pointer args
void f(int n) {
  n *= 10;
}

int main() {
  int n = 2;
  f(n);

  printf("%d", n); //2
}