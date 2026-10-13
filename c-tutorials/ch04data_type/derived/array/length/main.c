#include <stdio.h>

int main() {
  // 배열 크기: 16바이트(4바이트 * 4)
  int arr[] = {10, 20, 30, 40};

  // 16바이트 / 4바이트 = 4
  int length = sizeof(arr) / sizeof(arr[0]);

  printf("%d\n", length);
}

// 4