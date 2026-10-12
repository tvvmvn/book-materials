#include <stdio.h>
#include <stdlib.h>

int main() {
  // 2 x 3
  int rows = 2;
  int cols = 3;

  int** arr = malloc(sizeof(int*) * rows);

  for (int i = 0; i < rows; i++) {
    arr[i] = malloc(sizeof(int) * cols);
  }

  printf("%p\n", arr);
  printf("%p\n", arr[0]);
  printf("%p\n", arr[1]);

  for (int i = 0; i < rows; i++) {
    free(arr[i]);
    // arr[i] = NULL; 
  }

  free(arr);
  arr = NULL;
}