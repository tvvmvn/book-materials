#include <stdio.h>

// 입력된 숫자의 팩토리얼을 구하는 함수
int factorial(int n) {
  if (n > 1) {
    return n * factorial(n - 1);
  } else {
    return 1;
  }
}

int main() {
  printf("5! = %d", factorial(5)); 
  
  return 0;
}

// 5! = 120