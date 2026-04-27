#include <stdio.h>
#include <stdlib.h>

int main() {
  // 포인터 선언
  int* ptr = NULL;

  // 할당된 공간의 주소
  ptr = (int*)malloc(sizeof(int));

  // 할당이 잘 됬는지 검사합니다.
  if (ptr == NULL) {
    printf("Memory allocation failed\n");
    return 1;
  }

  // 할당받은 공간 정보
  printf("address: %p\n", ptr); 

  // 메모리 사용이 끝나면 빌린 공간을 반환합니다
  free(ptr);
  // 포인터를 정리합니다.
  ptr = NULL;

  return 0;
}

// address: 0x7fbdfb805be0
