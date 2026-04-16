# enum

상수의 집합.
열거형(Enumerable) 상수가 필요한 경우.
상수들은 0부터 차례로 1씩 증가하는 값을 가집니다.


```c
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
```