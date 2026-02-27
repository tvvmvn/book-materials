#include <stdio.h>

int main() {
  char persons[3][10] = {"John Doe", "Jane Doe", "Marry Doe"};

  for (int i = 0; i < 3; i++) {
    printf("%s\n", persons[i]);
  }
  // John Doe
  // Jane Doe
  // Marry Doe
}