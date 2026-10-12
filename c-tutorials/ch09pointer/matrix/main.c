#include <stdio.h>
#include <stdlib.h>

int main() {
  int** arr;
  int rows = 2, cols = 3;

  // set rows
  arr = (int**)malloc(sizeof(int*) * rows);

  // set cols
  for (int i = 0; i < rows; i++) {
    arr[i] = (int*)malloc(sizeof(int) * cols);
  }

  // assign values
  for (int i = 0; i < rows * cols; i++) {
    arr[i / cols][i % cols] = i + 1;
  }

  // print items
  for (int r = 0; r < rows; r++) {
    for (int c = 0; c < cols; c++) {
      printf("%d ", arr[r][c]);
    }
    printf("\n");
  }

  // 메모리 해제
  for (int i = 0; i < rows; i++) {
    free(arr[i]);
  }
  free(arr);

  return 0;
}