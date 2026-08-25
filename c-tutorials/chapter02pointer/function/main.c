#include <stdio.h>

// 포인터를 입력받는 함수
void f(int* ptr) {
  // 원본 변수의 값을 바꿀 수 있습니다
  *ptr = 10;
}

int main() {
  int n = 2;

  // 함수에 변수의 주소를 입력했습니다
  f(&n);

  printf("%d", n); 
}

//10