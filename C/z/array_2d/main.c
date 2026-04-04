#include <stdio.h>

int main() {
  // 2차원 배열
  int phone[3][3] = {
    {1, 2, 3},
    {4, 5, 6},
    {7, 8, 9},
  };
  
  // 중첩 반복문을 이용해 2차원 배열을 순회합니다
  // 행 순회
  for (int r = 0; r < 3; r++) { 
    // 열 순회
    for (int c = 0; c < 3; c++) {
      printf("%d ", phone[r][c]);
    }
    printf("\n");
  }
}

// 1 2 3 
// 4 5 6 
// 7 8 9 