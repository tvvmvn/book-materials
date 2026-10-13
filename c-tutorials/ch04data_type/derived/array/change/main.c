#include <stdio.h>

int main() {
  int nums[] = {10, 20, 30};

  // 첫번째 요소를 10 -> 100으로 수정
  nums[0] = 100;

  printf("%d\n", nums[0]);
}

// 100