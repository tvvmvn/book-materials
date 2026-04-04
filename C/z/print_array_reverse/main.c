#include <stdio.h>

int main() {
  int arr[] = {10, 20, 30, 40, 50};
  int size = 5;

  // i의 초기값은 4이고 1씩 감소해 0에서 끝납니다.
  // 이를 활용해 배열 순회를 마지막 요소부터 시작할 수 있습니다
  for (int i = size - 1; i >= 0; i--) {
    printf("%d ", arr[i]);
  }
}

// 50 40 30 20 10 
