#include <stdio.h>

int main() {
  int n = 2;
  int* ptr = &n;

  printf("%d\n", *ptr); // 2

  return 0;
}