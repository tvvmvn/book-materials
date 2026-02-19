#include <stdio.h>

void f() {
  const int x = 1;
}

int main() {
  printf("%d", x);
}