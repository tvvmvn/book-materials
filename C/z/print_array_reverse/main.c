#include <stdio.h>

int main() {
  int arr[] = {10, 20, 30, 40, 50};
  int size = 5;

  for (int i = size - 1; i >= 0; i--) {
    printf("%d ", arr[i]);
  }
}

// 50 40 30 20 10 
