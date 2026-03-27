#include <stdio.h>

int main() {
  int n = 2; 
  int* ptr = &n;
  int** pptr = &ptr;

  printf("%p\n", pptr);
  printf("%p\n", *pptr);
  printf("%d\n", **pptr);
}

// 0x7ff7bfeff210
// 0x7ff7bfeff21c
// 2