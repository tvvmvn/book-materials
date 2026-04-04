#include <stdio.h>

int main() {
  // 문자열 포인터를 활용한 문자열 배열입니다
  char* persons[] = {"John", "Jane", "Mary"};

  // 각 요소를 포인터로 출력합니다
  for (int i = 0; i < 3; i++) {
    printf("%p\n", persons[i]);
  }

  // 각 요소를 문자열로 출력합니다
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