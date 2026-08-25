#include <stdio.h>

int main() {
  int arr[] = {3, 5, 2, 1, 4};

  int min = arr[0];

  for (int i = 0; i < 5; i++) {
    // 더 작은 값을 발견하면 min 변수를 업데이트합니다
    if (arr[i] < min) {
      min = arr[i];
    }
  }

  printf("min value: %d", min);
}

// min value: 1