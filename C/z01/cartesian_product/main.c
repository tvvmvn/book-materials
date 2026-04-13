#include <stdio.h>

int main() {
  int a[] = {1, 2, 3, 4};
  int b[] = {5, 6, 7};

  printf("a * b:\n");
  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 3; j++) {
      printf("(%d, %d) ", a[i], b[j]);
    }
    printf("\n");
  }
}

// a * b:
// (1, 5) (1, 6) (1, 7) 
// (2, 5) (2, 6) (2, 7) 
// (3, 5) (3, 6) (3, 7) 
// (4, 5) (4, 6) (4, 7) 