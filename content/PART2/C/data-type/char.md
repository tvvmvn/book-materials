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