# Intro

- What is C
- Output
- Comment


# What is C
<!-- 프로그래밍 이론으로 -->


# 시작하기

'hello C'를 출력하는 프로그램입니다.

```c
#include <stdio.h>

int main() {
  //  출력 함수입니다
  printf("hello C");

  return 0;
}
```


제일 위에 코드에 필요한 헤더를 추가합니다. 위 코드는 출력 함수를 사용하기 위해 stdio 헤더를 추가했습니다.

C의 모든 프로그램은 main 함수에서 시작합니다.

printf 함수에 출력할 값을 전달합니다.

코드를 작성할 때 메모가 필요한 경우 주석을 사용합니다. 주석은 프로그램에 포함되지 않습니다. 슬래시 두개(//)로 주석을 만들 수 있습니다.


# 이스케이프 문자 (Escape Character)

출력할 문자열에 줄 바꿈이 필요하다거나 따옴표가 필요한 경우 등 다양한 상황이 발생할 수 있습니다. 

이런 경우에 사용하는 것이 이스케이프 문자(escape character)입니다. 이스케이프 문자는 백슬래시(\) 뒤에 기능과 연결되는 문자를 더하여 나타냅니다.

다음은 자주 쓰이는 이스케이프 문자들입니다.

- \n  줄 바꿈
- \t  탭
- \0  널 
- \'  작은 따옴표
- \"  큰 따옴표
- \\  백슬래시


```c
#include <stdio.h>

int main() {
  printf("What's your name?\nJohn");
  // What's your name?
  // John

  return 0;
}
```

