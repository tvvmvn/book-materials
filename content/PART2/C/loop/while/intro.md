# while 문

다음은 while 문의 사용 방법입니다

```
while (반복 조건) {
  반복 실행할 코드
}
```


다음은 1부터 9까지 출력하는 코드입니다.

```c
int n = 1;

while (n < 10) {
  printf("%d", n);
  n++;
}
// 123456789
```


다음은 while 문을 활용해 1부터 10까지 합을 구하는 과정입니다

```c
int n = 1;
int sum = 0;

while (n <= 10) {
  sum += n;
  n++;
}

printf("%d", sum);
// 10
```


# break

특정 조건을 만족하는 경우 break로 반복문을 빠져나오게 할 수 있습니다.

```c
int n = 0;

while (n < 5) {
  if (n == 3) {
    break;
  }
  printf("%d", n);
  n++;
}
// 012
```


# continue

특정 조건을 만족하는 경우 continue로 반복 회차를 건너뛸 수 있습니다.

```c
int n = 0;

while (n < 5) {
  if (n == 2) {
    continue;
  }
  printf("%d", n);
  n++;
}
// 0134
```


# do while 문

반복 조건과 상관없이 최소 한번은 코드를 실행해야 하는 경우에 유용합니다.

```
do {
  반복 실행할 코드
} while (조건);
```

다음은 사용자가 0보다 큰 수를 고를 때까지 계속 요청하는 코드입니다. 만약 일반 while문으로 작성한다면 input의 초기값이 조건을 만족하지 않으므로 바로 프로그램이 종료되어버립니다.

```c
int input;

do {
  printf("0 보다 큰 수 아무거나 하나 골라보세요");

  scanf("%d", &input);
} while (input <= 0);
```