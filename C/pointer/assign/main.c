#include <stdio.h>

int main() {
  int n = 2;
  int* ptr = &n;
  
  printf("%p\n", ptr); 
  
  return 0;
}

// 0x7ff7bfeff1d8