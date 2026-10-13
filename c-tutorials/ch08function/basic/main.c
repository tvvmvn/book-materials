#include <stdio.h>

// x, y는 매개변수
int add(int x, int y) {
  return x + y;
}

int main() {
  // add 함수의 반환값을 변수 r에 저장합니다.
  int r = add(1, 2); // 1, 2는 인자
  
  printf("result: %d\n", r); 
  
  return 0;
}

// result: 3
