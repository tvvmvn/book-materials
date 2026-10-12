#include <stdio.h>

int main() {
  
  int length = 3;
  int* arr = malloc(sizeof(int) * length);

  arr[0] = 10;
  arr[1] = 20;
  arr[2] = 30;

  printf("%p\n", arr);

  free(arr);

  arr = NULL;
}