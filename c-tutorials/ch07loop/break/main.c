#include <stdio.h>

int main() {
  for (int i = 1; i <= 5; i++) {
    // i가 3이 되면 빠져나와라
    if (i == 3) {
      break;
    }
    printf("%d", i);
  }

  return 0;
}

//12
