#include <stdio.h>

int main() {
  int matrix[2][3] = {{1, 2, 3}, {4, 5, 6}};

  printf("%p %lu\n", matrix, sizeof(matrix));
  printf("%p %lu\n", *matrix, sizeof(*matrix));
  printf("%p %lu\n", matrix[0], sizeof(matrix[0]));
  printf("%p %lu\n", matrix[1], sizeof(matrix[1]));
}

// 0x7ff7bfeff030 24
// 0x7ff7bfeff030 12
// 0x7ff7bfeff030 12
// 0x7ff7bfeff03c 12