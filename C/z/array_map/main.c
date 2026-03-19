#include <stdio.h>

void doubleArr(int arr[], int size) {
  for (int i = 0; i < size; i++) {
    arr[i] *= 10;
  }
}

int main() {
  int arr[] = {10, 20, 30, 40};
  int size = 4;

  doubleArr(arr, size);

  for (int i = 0; i < size; i++) {
    printf("%d ", arr[i]);
  }
  
  return 0;
}
// 20 40 60 80
