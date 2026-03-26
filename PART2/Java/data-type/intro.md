# 자료형 (Data Type)

다음은 자바의 자료형입니다. 이 자료형들은 참조 변수(객체)에 대비해서 원시 자료형(Primative Type)이라고도 불립니다.

원시값(Primitive type)
  정수형 (Integer)
  실수형 (Floating point number)
    float
    double
  문자형 (Character)
  불리언 (Boolean)

비원시값(Non-Primitive type)
  문자열 (String)
  배열 (Array)
  기타 객체 (etc)


# 정수형 (Integer)

- byte
- short
- int
- long

byte: -128에서 127사이의 정수를 저장할 수 있습니다

short: -32,768에서 32,767사이의 정수를 저장할 수 있습니다

int: 보다 넓은 범위의 정수를 저장할 수 있습니다. 일반적인 상황에서 가장 많이 사용됩니다

long: int보다 넓은 범위의 정수를 저장할 수 있습니다. 숫자 뒤에 L을 작성해야 합니다.

```java
byte myNum = 10;
short myNum = 10;
int myNum = 10;
long myNum = 10L;
```


# 실수형 (Floating point number)

소수점 이하 숫자를 표현하고 싶은 경우 사용합니다.

float은 소수점 이하 6-7개의 숫자 표현이 가능합니다. 
숫자 뒤에 f를 작성해야 합니다.

double은 소수점 이하 15 - 16개의 숫자 표현이 가능합니다. float보다 높은 정확도로 일반적으로 더 많이 사용됩니다.
숫자 뒤에 d를 표시해야 합니다. 


```java
float myNum = 5.75f;
double myNum = 19.99d;
```


# 불리언 (Boolean)

boolean은 참 또는 거짓(true or false)을 값으로 가집니다.

```java
boolean isJavaFun = true;
boolean isFishTasty = false;
```


# 문자형 (Character)

char는 한개의 문자를 값으로 가집니다. 작은 따옴표 안에 문자를 작성합니다.

```java
char best = 'A';
char good = 'B';
```


만약 아스키(ASCII) 코드에 익숙하다면 문자형에서 아스키 코드를 활용해도 됩니다.

```java
char myVar1 = 65;
char myVar2 = 66;
char myVar3 = 67;

System.out.println(myVar1); // A
System.out.println(myVar2); // B
System.out.println(myVar3); // C
```
