#include <stdio.h>

void isEven(int d) {
  if (d % 2 == 0) {
    printf("even\n");
  } else {
    printf("odd\n");
  }
}

int main() {
  isEven(2);
  isEven(-4);
  isEven(3);
  isEven(0);
}

//even
//even
//odd
//even