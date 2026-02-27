#include <stdio.h>

int add(int x, int y) {
  return x + y;
}

int main() {
  int r = add(1, 2);
  
  printf("1 + 2 = %d\n", r); 
  // 1 + 2 = 3

  return 0;
}

