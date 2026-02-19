#include <stdio.h>

enum Level {//all integers
  LOW,
  MEDIUM,
  HIGH
};

int main() {
  printf("%d\n", LOW);//0
  printf("%d\n", MEDIUM);//1
  printf("%d\n", HIGH);//2
   
  return 0;
}
