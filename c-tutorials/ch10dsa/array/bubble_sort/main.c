#include <stdio.h>

int main() {
  int arr[] = {64, 34, 25, 12, 22, 11, 90, 5};
  // 32 / 4 = 8
  int n = sizeof(arr) / sizeof(arr[0]);

  // 버블 정렬을 수행하는 코드입니다
  for (int i = 0; i < n - 1; i++) {
    for (int j = 0; j < n - i - 1; j++) {
      // 만약 마주한 두 요소에서 앞에 요소가 뒤에 요소보다 크다면
      if (arr[j] > arr[j + 1]) {
        // 앞 요소를 저장한 임시 변수
        int temp = arr[j];
        // 두 요소의 자리를 바꿉니다.
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
    }
  }

  printf("result: ");
  for (int i = 0; i < n; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");

  return 0;
}

// result: 5 11 12 22 25 34 64 90 
