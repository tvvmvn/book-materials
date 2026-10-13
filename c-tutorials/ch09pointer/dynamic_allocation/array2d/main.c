#include <stdio.h>
#include <stdlib.h>

int main() {
  // 목표 행렬: 2 x 3
  int rows = 2;
  int cols = 3;

  // 행 주소를 담을 공간 확보
  int** arr = malloc(sizeof(int*) * rows);

  // 요소들을 담을 공간 확보
  for (int i = 0; i < rows; i++) {
    arr[i] = malloc(sizeof(int) * cols);
  }

  // 요소 할당
  arr[0][0] = 1;
  arr[0][1] = 2;
  arr[0][2] = 3;
  arr[1][0] = 4;
  arr[1][1] = 5;
  arr[1][2] = 6;

  // 요소 출력
  for (int r = 0; r < rows; r++) {
    for (int c = 0; c < cols; c++) {
      printf("%d ", arr[r][c]);
    }
    printf("\n");
  }

  // 요소들이 있는 메모리부터 해제합니다
  for (int i = 0; i < rows; i++) {
    free(arr[i]);
  }

  // 행 주소가 있는 메모리를 해제하고 포인터를 초기화합니다.
  free(arr);
  arr = NULL;
}
// 1 2 3 
// 4 5 6 