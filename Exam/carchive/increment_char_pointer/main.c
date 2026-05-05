#include <stdio.h>

int main() {
  char* s = "hello";

  // s가 변함
  printf("%p\n", s);
  printf("%p\n", ++s);
  printf("%p\n", ++s);
}

// 0x100000f98
// 0x100000f99
// 0x100000f9a