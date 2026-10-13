#include <stdio.h>

int main() {
  for (int i = 1; i <= 5; i++) {
    // i가 3이면 건너뛰어라
    if (i == 3) {
      continue;
    }
    printf("%d", i);
  }
}

//1245