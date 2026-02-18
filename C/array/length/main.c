#include <stdio.h>

int main() {
  
  int arr[] = {10, 20, 30};

  // 12 / 4 = 3
  int length = sizeof(arr) / sizeof(arr[0]);

  printf("%d\n", length);
}
