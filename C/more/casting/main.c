#include <stdio.h>

int main() {
  // 정수값을 실수형에 저장 (업캐스팅)
  float f = 2; 
  // 실수값을 정수형에 저장 (다운캐스팅)
  int i = 2.5;
  
  printf("%f\n", f);
  printf("%d\n", i);
}

// 2.000000
// 2

