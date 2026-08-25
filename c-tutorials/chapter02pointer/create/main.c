#include <stdio.h>

int main() {
  int n = 2;
  // 변수 n의 주소를 저장한 포인터
  int* ptr = &n;
  
  printf("%p\n", ptr); 
  
  return 0;
}

// 0x7ff7bfeff1d8