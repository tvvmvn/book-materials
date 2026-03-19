#include <stdio.h>

int main() {
  char* persons[] = {"John", "Jane", "Mary"};

  for (int i = 0; i < 3; i++) {
    printf("%p\n", persons[i]);
  }

  for (int i = 0; i < 3; i++) {
    printf("%s\n", persons[i]);
  }
}

// 0x100000f82
// 0x100000f87
// 0x100000f8c
// John
// Jane
// Mary