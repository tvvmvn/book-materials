# 증감 연산자

- 증가 연산자 (Increment Operator)
- 감소 연산자 (Decrement Operator)


# 증가 연산자

변수를 1 증가시킵니다. 증감 연산자가 앞에 붙는 경우와 뒤에 붙는 경우에는 미세한 차이가 있습니다.

변수++

```c
#include <stdio.h>

int main() {
  int x = 1;
  x++;
  printf("%d\n", x); //2
}
```


# 감소 연산자

변수를 1 감소시킵니다. 감소 연산자가 앞에 붙는 경우와 뒤에 붙는 경우에는 미세한 차이가 있습니다.

변수--

```c
#include <stdio.h>

int main() {
  int x = 1;
  x--;
  printf("%d\n", x); //0
}
```