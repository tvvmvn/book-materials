#include <stdio.h>

void greet(char to[]) {
  printf("hello %s\n", to);
}

int main() {
  greet("C");
  greet("Java");
  greet("Python");
}

// hello C
// hello Java
// hello Python