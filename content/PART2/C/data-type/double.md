# double

double은 배정밀도(Double precision)로 실수를 저장합니다.
float보다 더 많은 소수점 이하 숫자를 저장할 수 있습니다. 15개 정도까지 저장가능합니다.

예약어: double
크기: 8바이트
서식 지정자: %lf


```c
#include <stdio.h>

int main() {
  double d = 1.5;

  printf("%lf\n", d);//1.500000
  printf("%.1lf\n", d);//1.5
  printf("%.2lf\n", d);//1.50
}
```
