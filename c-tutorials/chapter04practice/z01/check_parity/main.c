#include <stdio.h>

void checkParity(int n) {
  if (n % 2 == 0) {
    printf("even number\n");
  } else {
    printf("odd number\n");
  }
}

int main() {
  checkParity(1);
  checkParity(4);
  checkParity(5);
}

// odd number
// even number
// odd number