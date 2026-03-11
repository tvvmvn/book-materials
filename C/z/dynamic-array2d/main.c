#include <stdio.h>
#include <stdlib.h>

int main() {
  int rows = 3, cols = 4;

  // 1. 행(row)들의 주소를 담을 포인터 배열 할당
  int **arr = (int **)malloc(rows * sizeof(int *));

  // 2. 각 행마다 실제 데이터를 담을 공간(column) 할당
  for (int i = 0; i < rows; i++) {
    arr[i] = (int *)malloc(cols * sizeof(int));
  }

  // 사용 예시 (일반 배열처럼 사용 가능)
  arr[1][2] = 10;

  // 3. 해제 (할당의 역순)
  for (int i = 0; i < rows; i++) {
    free(arr[i]);
  }
  free(arr);

  return 0;
}