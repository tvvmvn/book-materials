#include <stdio.h>

// 반환 자료형에 void라고 적습니다.
void add(int x, int y) {
  printf("result: %d\n", x + y); 
}

int main() {
  add(1, 2);
  
  return 0;
}

// result: 3
