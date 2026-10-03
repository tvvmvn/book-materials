#include <stdio.h>

int add(int x, int y) {
  return x + y;
}

int main() {
  int r = add(1, 2);
  
  printf("result: %d\n", r); 
  
  return 0;
}

// result: 3
