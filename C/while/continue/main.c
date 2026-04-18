#include <stdio.h>

int main() {
  int n = 1;
  while (n <= 5) {
    n++;
    if (n == 3) {
      continue;
    }
    printf("%d", n);
  }
}

// 2456