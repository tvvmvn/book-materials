#include <stdio.h>

int main() {
  int input = 0;

  do {
    printf("0보다 큰 수 아무거나 하나 골라보세요");

    scanf("%d", &input);

  } while (input <= 0);
}

//0보다 큰 수 아무거나 하나 골라보세요 2