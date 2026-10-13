#include <stdio.h>
#include <stdlib.h>

int main() {
  // 생성할 배열의 길이
  int length = 3;
  // 메모리 할당
  int* arr = malloc(sizeof(int) * length);

  // 확보한 공간에 요소 저장
  arr[0] = 10;
  arr[1] = 20;
  arr[2] = 30;

  // 요소가 잘 저장되었는지 확인해봅시다.
  for (int i = 0; i < length; i++) {
    printf("%d\n", arr[i]);
  }

  // 메모리 해제 및 포인터 초기화
  free(arr);
  arr = NULL;
}
// 10
// 20
// 30