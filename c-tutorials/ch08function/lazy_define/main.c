#include <stdio.h>

// 함수 선언부 (추상화 역할)
int add(int x, int y);

int main() {
  int r = add(1, 2);
  
  printf("result: %d\n", r); 
  
  return 0;
}

// 나중에 정의하기
int add(int x, int y) {
  return x + y;
}

// result: 3
