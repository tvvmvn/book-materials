# 삼항 연산자(Ternary Operator)

간단한 조건문의 경우 삼항 연산자를 활용할 수 있습니다.

사용 방법
```c
조건 ? 표현1 : 표현2;

조건이 참이면 표현1을 반환하고 조건이 거짓이면 표현2를 반환합니다
```

```c
int age = 20;

age >= 18 ? printf("Adult") : printf("Not an adult");

// Adult
```