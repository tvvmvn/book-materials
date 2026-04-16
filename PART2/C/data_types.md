# 자료형 (Data Type)

기본 자료형
  int
  float/double
  char
배열
문자열 (배열)
구조체

<그림 - C 자료형>


# 기본 자료형 (Primary Type)

- 정수형 integer
- 실수형 (단정밀도) float
- 실수형 (배정밀도) double
- 문자형 char


# 정수형

양수, 0, 음수 등 정수 값을 가집니다.

- 변수 선언 예약어: int
- 서식 지정자: %d
- 크기: 4바이트


```c
int a = 2;
int b = 0;
int c = -3;

printf("%d\n", a); // 2
printf("%d\n", b); // 0
printf("%d\n", c); // -3
```


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


# double

double은 배정밀도(Double precision)로 실수를 저장합니다.
float보다 더 많은 소수점 이하 숫자를 저장할 수 있습니다. 15개 정도까지 저장가능합니다.

예약어: double
크기: 8바이트
서식 지정자: %f 또는 %lf


```c
#include <stdio.h>

int main() {
  double d = 1.5;

  printf("%f\n", d);//1.500000
  printf("%.1f\n", d);//1.5
  printf("%.2f\n", d);//1.50
}
```


# 문자형 (character type)

한 개의 문자를 값으로 가지는 자료형입니다. 작은 따옴표 안에 값을 작성합니다.

- 변수 선형 예약어: char 
- 포멧 지정자: %c
- 크기: 1바이트

```c
char char1 = 'a';
char char2 = 'b';
char char3 = 'c';

printf("%c\n", char1); //a
printf("%c\n", char2); //b
printf("%c\n", char3); //c
```


만약 여러분이 아스키 코드에 익숙하다면 아스키 코드로 문자형 변수를 다루어도 됩니다.

```c
char a = 65;
char b = 66; 
char c = 67;

printf("%c\n", a); //A
printf("%c\n", b); //B
printf("%c\n", c); //C
```