#include <stdio.h>

int main() {
  char persons[3][10] = {"John", "Jane", "Marry"};

  for (int i = 0; i < 3; i++) {
    printf("%s\n", persons[i]);
  }
}

// John
// Jane
// Marry