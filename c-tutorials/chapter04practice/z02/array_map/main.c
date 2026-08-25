#include <stdio.h>

// 배열의 각 아이템에 10을 곱하는 함수
void map(int arr[], int size) {
  for (int i = 0; i < size; i++) {
    arr[i] *= 10;
  }
}

int main() {
  int arr[] = {10, 20, 30, 40};
  int size = 4;

  // 배열 변수는 포인터라는 것을 잊지 마세요.
  // 따라서 함수에서 원본 배열을 수정할 수 있습니다
  map(arr, size);

  // 변환된 배열의 원소들을 출력합니다
  for (int i = 0; i < size; i++) {
    printf("%d ", arr[i]);
  }
  
  return 0;
}

// 100 200 300 400 

