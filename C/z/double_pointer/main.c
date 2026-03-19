#include <stdio.h>

int main() {
  int n = 2; 
  int* ptr = &n;
  int** pptr = &ptr;

  printf("%p\n", pptr);// 0x7ff7bfeff210
  printf("%p\n", *pptr);// 0x7ff7bfeff21c
  printf("%d\n", **pptr);// 2
}


