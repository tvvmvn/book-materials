#include <stdio.h>

void display(char s[]) {
  printf("hello %s\n", s);
}

int main() {
  display("C");
  display("Java");
  display("Python");
  
  return 0;
}

// hello C
// hello Java
// hello Python