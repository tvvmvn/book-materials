#include <stdio.h>

int main() {
  int n = 2;
  int* ptr = &n;

  // 역참조
  printf("%d\n", *ptr); 

  return 0;
}

// 2