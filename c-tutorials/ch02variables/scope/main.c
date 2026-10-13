#include <stdio.h>

// 전역 변수
int a = 1;

void f() {
  // f함수의 지역 변수
  int b = 2;
}

int main() {
  printf("%d\n", a);
  // 컴파일 에러 (지역 변수에 접근 시도)
  // printf("%d\n", b); 

  return 0;
}