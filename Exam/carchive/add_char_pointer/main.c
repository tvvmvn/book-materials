#include <stdio.h>

int main() {
  char* s = "hello";

  // s는 변하지 않음
  printf("%p\n", s);
  printf("%p\n", s + 1);
  printf("%p\n", s + 2);
}

// 0x100000f92
// 0x100000f93
// 0x100000f94