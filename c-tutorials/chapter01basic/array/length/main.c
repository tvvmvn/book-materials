#include <stdio.h>

int main() {
  int arr[] = {10, 20, 30, 40};

  int length = sizeof(arr) / sizeof(arr[0]);
  // 16 / 4 = 4

  printf("%d\n", length);
}

// 4