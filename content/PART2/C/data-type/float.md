# float

float은 단정밀도(Single Precision)으로 실수를 저장합니다.
float은 6-7개의 소수점 이하 숫자를 저장할 수 있습니다. 

예약어: float
크기: 4바이트
서식 지정자: %f


```c
#include <stdio.h>

int main() {
  float num = 1.5;

  printf("%f\n", num);//1.500000
  printf("%.1f\n", num);//1.5
  printf("%.2f\n", num);//1.50
}
```