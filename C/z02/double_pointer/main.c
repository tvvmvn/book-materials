#include <stdio.h>

int main() {
  int n = 2; 
  // 변수 n의 주소를 저장한 포인터 ptr
  int* ptr = &n;
  // ptr의 주소를 저장한 pptr
  int** pptr = &ptr;

  // pptr 출력
  printf("%p\n", ptr);
  printf("%p\n", *pptr);
}

// 0x7ff7bfeff11c
// 0x7ff7bfeff11c