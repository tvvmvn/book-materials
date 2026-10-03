#include <stdio.h>

enum Level {
  LOW,
  MEDIUM,
  HIGH
};

int main() {
  enum Level myLevel = HIGH;

  printf("%d\n", myLevel == HIGH);
   
  return 0;
}

// 1