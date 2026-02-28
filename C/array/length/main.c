#include <stdio.h>

int main() {
  int arr[] = {10, 20, 30};

  int length = sizeof(arr) / sizeof(arr[0]);
  // 12 / 4 = 3

  printf("%d\n", length);
}
