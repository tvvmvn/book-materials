# while 문

다음은 while 문의 사용 방법입니다

```
while (반복 조건) {
  반복 실행할 코드
}
```


다음은 블록을 10번 반복하는 코드입니다.

```c
#include <stdio.h>

int main() {
  int i = 0;

  while (i < 10) {
    printf("%d times excuted\n", i);
    i++;
  }

  return 0;
}
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

