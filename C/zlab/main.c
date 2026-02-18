#include <stdio.h>

int main() {
  int input; // 1

  while (input <= 0) {
    printf("0 보다 큰 수 아무거나 하나 골라보세요");

    scanf("%d", &input);
  } 
}