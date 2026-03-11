#include <stdio.h>

void isEven(int d) {
  if (d % 2 == 0) {
    printf("even\n");
  } else {
    printf("odd\n");
  }
}

int main() {
  isEven(2);//even
  isEven(-4);//even
  isEven(3);//odd
  isEven(0);//even
}
