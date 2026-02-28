#include <stdio.h>
#include <string.h>

struct Car {
  char brand[30];
  int year;
};

int main() {
  struct Car* carPtr;

  strcpy(carPtr->brand, "Toyota");
  carPtr->year = 2020;

  printf("%s\n", carPtr->brand); // Toyota
  printf("%d\n", carPtr->year); // 2020

  return 0;
}