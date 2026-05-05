#include <stdio.h>

int main() {
  int arr[] = {10, 20, 30};

  printf("%p\n", arr); 
  printf("%p\n", &arr[0]);
}

// 0x7ff7bfeff05c
// 0x7ff7bfeff05c