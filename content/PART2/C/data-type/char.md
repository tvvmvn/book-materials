# 문자형


한 개의 문자를 값으로 가지는 자료형입니다. 작은 따옴표 안에 값을 작성합니다.
변수 선형 예약어는 char 이고 크기는 1바이트입니다.

```c
char myGrade = 'A';

printf("%c", myGrade); //A
```


만약 여러분이 아스키 코드에 익숙하다면 아스키 코드로 문자형 변수를 다루어도 됩니다.

```c
char a = 65;
char b = 66; 
char c = 67;

printf("%c", a); //A
printf("%c", b); //B
printf("%c", c); //C
```