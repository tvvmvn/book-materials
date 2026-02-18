#include <stdio.h>

int main() {
  int n = 0;

  while (n < 5) {
    if (n == 2) {
      continue;
    }
    printf("%d", n);
    n++;
  }
  // 0134
}