#include <stdio.h>
#include <stdlib.h>

void f(int* ptr, int n) {
  *ptr = 100;
  n = 100;
}

int main() {
  int x = 1;
  int y = 1;

  // x는 주소 전달, y는 값 전달
  f(&x, y);

  // x는 바뀌었지만 y는 그대로임
  printf("%d, %d\n", x, y); 
}

// 100, 1