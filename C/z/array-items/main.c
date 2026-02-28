#include <stdio.h>

int main() {
  int arr[] = {10, 20, 30, 40};
  int size = 4;

  for (int i = 0; i < size; i++) {
    arr[i] *= 10;
  }

  for (int i = 0; i < size; i++) {
    printf("%d\n", arr[i]);
  }

  return 0;
}

