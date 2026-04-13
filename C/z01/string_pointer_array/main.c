#include <stdio.h>

int main() {
  // 문자열 포인터를 활용한 문자열 배열입니다
  char* persons[] = {"John", "Jane", "Mary"};

  // 각 요소를 문자열로 출력합니다
  for (int i = 0; i < 3; i++) {
    printf("%s in %p\n", persons[i], persons[i]);
  }
}

// John in 0x100000f84
// Jane in 0x100000f89
// Mary in 0x100000f8e