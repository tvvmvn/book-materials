#include <stdio.h>

enum Level {
  LOW,
  MEDIUM,
  HIGH
};

int main() {
  enum Level myLevel = HIGH;

  switch (myLevel) {
    case LOW:
      printf("Don't give up\n");
      break;
    case MEDIUM:
      printf("Keep going\n");
      break;
    case HIGH:
      printf("Great!\n");
      break;
  }
   
  return 0;
}
