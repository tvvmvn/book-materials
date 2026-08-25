#include <stdio.h>

// 전역 변수
int a = 1;

void f() {
  // f함수의 지역 변수
  int b = 2;
}

int main() {
  printf("%d\n", a);
  // printf("%d\n", b); // 컴파일 에러

  return 0;
}