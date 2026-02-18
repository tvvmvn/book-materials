#include <stdio.h>

int main() {
  double d = 1.5;

  printf("%lf\n", d);//1.500000
  printf("%.1lf\n", d);//1.5
  printf("%.2lf\n", d);//1.50
}