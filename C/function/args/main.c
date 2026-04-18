#include <stdio.h>

// x, y는 매개변수
void add(int x, int y) {
  printf("%d + %d = %d\n", x, y, x + y);
}

int main() {
  // 실제 전달되는 값들은 인자
  add(1, 2); 
  add(2, 3); 
  add(3, 4); 

  return 0;
}
//1 + 2 = 3 
//2 + 3 = 4
//3 + 4 = 7