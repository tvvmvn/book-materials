#include <stdio.h>

struct Car {
  char brand[30];
  int year;
};

int main() {
  struct Car car = {"Toyota", 2020};

  struct Car *carPtr = &car;

  printf("%s\n", carPtr->brand); // Toyota
  printf("%d\n", carPtr->year); // 2020

  return 0;
}