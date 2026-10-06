#include <stdio.h>

int main() {
  double pi = 3.141592653589793;

  printf("%f\n", pi);
  printf("%.2f\n", pi);
  // 소수점 이하 15자리 까지 정확히 표현함
  printf("%.15f\n", pi);
}

// 3.141593
// 3.14
// 3.141592653589793