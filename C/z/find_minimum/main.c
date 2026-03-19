#include <stdio.h>

int main() {
  int arr[] = {3, 5, 2, 1, 4};

  int min = arr[0];

  for (int i = 0; i < 5; i++) {
    if (arr[i] < min) {
      min = arr[i];
    }
  }

  printf("min value: %d", min);
}

// min value: 1