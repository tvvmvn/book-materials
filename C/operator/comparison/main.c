#include <stdio.h>

int main() {
  int a = 1;
  int b = 2;

  printf("%d\n", a == b); //0
  printf("%d\n", a != b); //1
  printf("%d\n", a > b); //0
  printf("%d\n", a < b); //1
  printf("%d\n", a >= b); //0
  printf("%d\n", a <= b); //1
}