#include <stdio.h>

int main() {
  int level = 2;

  switch (level) {
    case 1:
      printf("Lv.1\n");
      break;
    case 2:
      printf("Lv.2\n");
      break;
    case 3:
      printf("Lv.3\n");
      break;
    default: //option
      printf("Unknown level\n");
  }
}

//Lv.2
