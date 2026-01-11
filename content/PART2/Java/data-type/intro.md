# 자료형

원시형과 비원시형으로 나뉩니다.

- 원시형 (Primitive)
- 비원시형 (Non-Primitive)


# Primitive

다음은 8가지 원시형의 자료형입니다

- byte
- short
- int
- long
- float
- double
- boolean


byte는 -128에서 127사이의 정수를 저장할 수 있습니다

```java
byte myNum = 100;
```

short는 -32,768에서 32,767사이의 정수를 저장할 수 있습니다

```java
short myNum = 5000;
```

int는 보다 넓은 범위의 정수를 저장할 수 있습니다. 일반적인 상황에서 가장 많이 사용됩니다

```java
int myNum = 100000;
```

long은 int보다 넓은 범위의 정수를 저장할 수 있습니다. 숫자 뒤에 L을 작성해야 합니다.

```java
long myNum = 15000000000L;
```

float은 실수형을 저장 할 수 있습니다. 소수점 이하 6-7개의 숫자 표현이 가능합니다.
숫자 뒤에 f를 작성해야 합니다.

```java
float myNum = 5.75f;
```

double은 실수형을 저장할 수 있습니다. 소수점 이하 15 - 16개의 숫자 표현이 가능합니다. 숫자 뒤에 d를 표시해야 합니다.

```java
double myNum = 19.99d;
```

boolean은 참 또는 거짓(true or false)을 값으로 가집니다.

```java
boolean isJavaFun = true;
boolean isFishTasty = false;
```

char는 한개의 문자를 값으로 가집니다. 작은 따옴표 안에 문자를 작성합니다.

```java
char myGrade = 'B';
```

만약 아스키(ASCII) 코드에 익숙하다면 문자형에서 아스키 코드를 활용해도 됩니다

```java
char myVar1 = 65;
char myVar2 = 66;
char myVar3 = 67;

System.out.println(myVar1); // A
System.out.println(myVar2); // B
System.out.println(myVar3); // C
```


# 비원시형

비원시형 값은 한마디로 클래스의 인스턴스입니다. 따라서 다음과 같은 객체의 특성을 가지고 있습니다. 

메서드를 가질 수 있습니다.
값이 null일 수 있습니다.

다음은 비원시형의 자료형입니다. 앞으로 하나씩 자세히 배울 것입니다.

- String
- Array
- Class
