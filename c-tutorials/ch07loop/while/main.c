#include <stdio.h>

int main() {
  // while 문 외부에서 반복 변수를 생성합니다.
  int i = 1;

  while (i <= 5) {
    printf("hello\n");
    // 변수 증감식
    i++;
  }

  return 0;
}

// hello
// hello
// hello
// hello
// hello