#include <stdio.h>

int main() {
  int arr[] = {10, 20, 30};

  // 첫번째 요소의 주소
  printf("%p\n", arr);
  // 첫번째 요소의 주소
  printf("%p\n", &arr[0]);
  
  return 0;
}

// 0x7ff7bfeff00c
// 0x7ff7bfeff00c