#include <stdio.h>

// 입력받은 정수가 양수인지 음수인지 판단하는 함수
void isPositive(int n) {
  if (n > 0) { // 양수인 경우
    printf("Positive number\n");
  } else if (n < 0) { // 음수인 경우
    printf("Negative number\n"); 
  } else { // 0인 경우
    printf("Zero\n");
  }
}

int main() {
  isPositive(2);
  isPositive(0);
  isPositive(-5);
}

// Positive number
// Zero
// Negative number