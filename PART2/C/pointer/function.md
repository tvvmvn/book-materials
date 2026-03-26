# 포인터와 함수

일반적으로 함수에 입력된 인자는 복사됩니다.


```c
#include <stdio.h>
#include <stdlib.h>

// pointer args
void f(int n) {
  n *= 10;
}

int main() {
  int n = 2;
  f(n);

  printf("%d", n); //2
}
```

주소를 전달하면 원본 배열을 수정할 수 있습니다.
구조체나 배열과 함께 많이 사용됩니다.
메모리 절약.


```c
#include <stdio.h>

// pointer args
void f(int* ptr) {
  *ptr *= 10;
}

int main() {
  int n = 2;
  f(&n);

  printf("%d", n); //20
}
```