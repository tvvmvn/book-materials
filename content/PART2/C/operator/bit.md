# 비트 연산자

비트 연산자는 비트 단위의 연산을 수행합니다. 매우 빠른 속도

- 기본 비트 연산자 (Basic bit operator)
- 비트 이동 연산자 (Shift operator)


# 기본 비트 연산자

- & (and)
- | (or)
- ^ (xor)
- ~ (not)

&는 둘다 1이면 1을 반환합니다.
|는 둘중에 하나가 1이면 1을 반환합니다
^은 둘이 다르면 1을 반환합니다.

```c
#include <stdio.h>

int main() {
  int a = 10; // 0000 1010
  int b = 12; // 0000 1100

  printf("and: %d\n", a & b);// 8  (0000 1000)
  printf("or: %d\n", a | b);// 14 (0000 1110)
  printf("xor: %d\n", a ^ b);// 6  (0000 0110)

  return 0;
}
```

~(not)은 비트를 뒤집습니다.

```c
#include <stdio.h>

int main() {
  int a = 5; // 0000 0101

  printf("%d\n", ~a); //-6
}
```


# 비트 이동 연산자

- left shift
- right shift

왼쪽 시프트 연산자는 변수값..
오른쪽 시프트 연산자는..

```c
#include <stdio.h>

int main() {
  int a = 10; // 0000 1010

  printf("%d\n", a << 1);//20 (0001 0100)
  printf("%d\n", a >> 1);//5 (0000 0101)
}
```