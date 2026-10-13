#include <stdio.h>

int main() {
  int n = 2;
  // 포인터
  int* ptr = &n;

  // 포인터를 역참조합니다
  printf("%d\n", *ptr); 

  return 0;
}

// 2