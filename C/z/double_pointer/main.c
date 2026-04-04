#include <stdio.h>

int main() {
  int n = 2; 
  // 변수 n의 주소를 가리키는 포인터 ptr
  int* ptr = &n;
  // ptr의 주소를 가리키는 pptr
  int** pptr = &ptr;

  // pptr 출력
  printf("%p\n", pptr);
  // pptr 역참조 -> ptr의 주소
  printf("%p\n", *pptr);
  // pptr 역참조 -> ptr의 주소
  // ptr 역참조 -> n
  printf("%d\n", **pptr);
}

// 0x7ff7bfeff210
// 0x7ff7bfeff21c
// 2