#include <stdio.h>

int main() {
  int matrix[2][3] = {{1, 2, 3}, {4, 5, 6}};

  printf("%p\n", matrix);
  printf("%p\n", *matrix);
  printf("%p\n", matrix[0]);
}

// 0x7ff7bfeff050
// 0x7ff7bfeff050
// 0x7ff7bfeff050