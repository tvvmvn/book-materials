#include <stdio.h>

int main() {

  // 합계를 저장할 변수
  int sum = 0;

  // 반복 변수값: 1 - 10
  for (int i = 1; i <= 10; i++) {
    // sum에 i를 누적시킵니다.
    sum += i;
  }
  
  printf("i: %d\n", sum);
  return 0;
}

// i: 55
