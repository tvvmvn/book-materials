#include <stdio.h>

int main() {
  // coordinates
  int crds[3][2] = {{100, 120}, {90, 100}, {110, 100}};
  
  // 중첩 반복문을 이용해 2차원 배열을 순회합니다
  for (int r = 0; r < 3; r++) { // 순서대로 행 방문 
    for (int c = 0; c < 2; c++) { // 그 행에서 순서대로 열 방문
      printf("%d ", crds[r][c]);
    }
    printf("\n");
  }
}

// 100 120 
// 90 100 
// 110 100 