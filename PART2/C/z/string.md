# 문자열과 포인터

문자형 포인터를 활용해 문자열을 다룰 수 있습니다.
이 경우 포인터는 문자열의 첫번째 글자를 가리킵니다.

문자형 포인터로 선언한 변수는 수정할 수 없음에 주의하세요.(읽기 전용)

```c
#include <stdio.h>

int main() {
  char* greeting = "hello";

  // greeting[0] = 'H'; // error

  printf("%s", greeting);
}
```