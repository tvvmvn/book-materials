#include <stdio.h>

int main() {
  int arr[] = {10, 20, 30};

  // 첫번째 요소의 주소
  printf("%p\n", arr);
  // 두번째 요소의 주소
  printf("%p\n", arr + 1);
  // 세번째 요소의 주소
  printf("%p\n", arr + 2);
  
  return 0;
}

// 0x7ff7bfeff220
// 0x7ff7bfeff224
// 0x7ff7bfeff228