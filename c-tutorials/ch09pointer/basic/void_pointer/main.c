#include <stdio.h>

int main() {
  // 포인터 초기화
  void* p = NULL;
  // 정수형 변수
  int n = 2;
  // 문자형 변수
  char c = 'A';

  // 정수형 변수의 주소 저장
  p = &n;
  // 형변환 후 역참조!
  printf("%d\n", *(int*)p);
  
  // 문자형 변수의 주소 저장
  p = &c;
  // 형변환 후 역참조!
  printf("%c\n", *(char*)p);
}

// 2
// A