#include <stdio.h>

int main() {
  int input = 1;

  do {
    printf("0보다 큰 수 아무거나 하나 골라보세요");

    scanf("%d", &input);

    // 일반 while 문을 쓰면 조건을 만족하지 않아 바로 끝나버립니다.
  } while (input <= 0);
}

//0보다 큰 수 아무거나 하나 골라보세요 2