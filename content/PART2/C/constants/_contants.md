# 상수 (Constant)

변하지 않는 값.

- const 키워드
- 매크로 상수
- enum


# const 키워드

간단해요

```c
#include <stdio.h>

int main() {
  const int PI = 3.14;  

  // error
  // pi = 3;
  
  return 0;
}
```


# 매크로 상수 (Macro Constant)

전역 상수가 필요할 때

```c
#include <stdio.h>
#define MAX_SIZE 100 //global

int main() {
  int arr[MAX_SIZE];
}
```


# enum

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