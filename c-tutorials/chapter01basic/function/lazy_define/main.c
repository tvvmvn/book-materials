#include <stdio.h>

void add(int x, int y);

int main() {
  add(1, 2);
}

void add(int x, int y) {
  printf("result: %d", x + y);
}

// result: 3
