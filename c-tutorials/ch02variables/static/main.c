#include <stdio.h>

void f() {
  // 일반 변수
  int a = 0;
  // 정적 변수
  static int b = 0;

  // 함수가 호출될 때마다 둘 다 값을 1씩 증가시켜봅니다.
  a++;
  b++;

  // 결과 확인
  printf("a: %d, b(static): %d\n", a, b);
}

int main() {
  f();
  f();
  f();
}

// a: 1, b(static): 1
// a: 1, b(static): 2
// a: 1, b(static): 3