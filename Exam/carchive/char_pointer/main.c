#include <stdio.h>

int main() {
  char* s = "hello";

  printf("%s\n", s);
  printf("%s\n", s + 1);
  printf("%s\n", s + 2);
}

// hello
// ello
// llo