#include <stdio.h>

// enum 선언
enum Level {
  LOW,
  MEDIUM,
  HIGH
};

int main() {
  // enum 변수를 선언합니다.
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

//Great!
