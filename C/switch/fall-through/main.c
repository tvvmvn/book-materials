#include <stdio.h>

int main() {
  int level = 2;

  switch (level) {
    case 1:
    case 2:
      printf("Beginner\n");
      break;
    case 3:
    case 4:
      printf("Amateur\n");
      break;
    case 5:
      printf("Master\n");
  }
}