#include <stdio.h>

int main() {
  int n = 1;

  while (n <= 5) {
    if (n == 3) {
      break;
    }
    printf("%d", n);
    n++;
  }
}

// 12