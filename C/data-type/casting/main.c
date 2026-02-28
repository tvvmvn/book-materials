#include <stdio.h>

int main() {
  float a = 1; //promotion
  int b = (int) 1.5; //casting

  printf("%f\n", a);//1.000000
  printf("%d\n", b);//1
}