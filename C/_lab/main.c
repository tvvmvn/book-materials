#include <stdio.h>

int main() {
  int n = 2;
  int* ptr = &n;
  int** pptr = &ptr;

  printf("%p\n", ptr);
  printf("%p\n", pptr);
}