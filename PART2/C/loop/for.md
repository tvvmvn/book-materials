# for 문

다음은 for 문의 사용 방법입니다.

```
for (표현1; 표현2; 표현3) {
  반복 실행할 코드
}

표현1: 변수의 초기값을 설정합니다
표현2: 반복 조건
표현3: 변수값을 변경시키는 연산
```

다음은 블록이 10번 반복되는 코드입니다.

```c
#include <stdio.h>

int main() {

  for (int i = 0; i < 10; i++) {
    printf("%d times executed\n", i);
  }

  return 0;
}
```


# break

특정 조건을 만족할 때 break로 반복문을 빠져나오게 할 수 있습니다.

```c
int i;

for (i = 0; i < 10; i++) {
  if (i == 4) {
    break;
  }
  printf("%d", i);
}
// 0123
```


# continue

특정 조건을 만족할 때 continue로 반복 회차를 건너뛰게 할 수 있습니다

```c
int i;

for (i = 0; i < 5; i++) {
  if (i == 2) {
    continue;
  }
  printf("%d", i);
}
//0134
```