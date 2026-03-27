#include <stdio.h>

void add(int x, int y) {
  printf("%d + %d = %d\n", x, y, x + y);
}

int main() {
  add(1, 2); 
  add(2, 3); 
  add(3, 4); 

  return 0;
}
//1 + 2 = 3 
//2 + 3 = 4
//3 + 4 = 7