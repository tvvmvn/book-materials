#include <stdio.h>

int main() {
  int n = 2;
  char c = 'A';

  // 정수형 변수의 주소 저장
  void* p = &n;
  // 문자형 변수의 주소 저장
  p = &c;

  // 사용하기 전에 형변환!
  printf("%c", *(char*)p);
}

// A