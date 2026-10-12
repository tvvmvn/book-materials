#include <stdio.h>

int main() {
  int level = 3;

  switch (level) {
    case 1:
    case 2:
      // 1 또는 2인 경우
      printf("Beginner\n");
      break;
    case 3:
    case 4:
      // 3 또는 4인 경우 
      printf("Amateur\n");
      break;
    case 5:
      // 5인 경우 
      printf("Master\n");
  }
}

//Amateur
