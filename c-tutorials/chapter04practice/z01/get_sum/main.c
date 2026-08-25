#include <stdio.h>

int main() {
  // 합계를 저장할 변수
  int sum = 0;

  for (int i = 1; i <= 10; i++) { 
    // 변수값을 sum에 누적시킵니다
    sum += i; 
  }
  printf("%d", sum);
}

//55