#include <stdio.h>

// 숫자가 짝수인지 아닌지 판단하는 함수
void isEven(int d) {
  // 2로 나누어 떨어지는지 확인합니다
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