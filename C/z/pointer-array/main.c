#include <stdio.h>

int main() {
  char* persons[] = {"John", "Jane", "Mary"};

  for (int i = 0; i < 3; i++) {
    printf("%s\n", persons[i]);
  }
}