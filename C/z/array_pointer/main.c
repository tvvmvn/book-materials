#include <stdio.h>

int main() {
  int myNumbers[] = {10, 20, 30, 40};

  printf("%p\n", myNumbers);
  printf("%p\n", myNumbers + 1);
  printf("%p\n", myNumbers + 2);
  printf("%p\n", myNumbers + 3);
  
  return 0;
}

// 0x7ff7bfeff220
// 0x7ff7bfeff224
// 0x7ff7bfeff228
// 0x7ff7bfeff22c