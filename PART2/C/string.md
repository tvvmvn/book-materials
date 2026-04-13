# 문자열 (String)

C 언어에서 "안녕하세요" 등의 연속된 문자(문자열)를 표현하고 싶을 때 문자형 배열을 활용합니다. 


# 문자열 생성하기

따옴표 안에 문자들을 작성합니다. 문자열은 문자의 배열입니다.

```c
char greetings[] = "hello";

printf("%s", greetings); // hello
```


# 각 문자에 접근하기 

문자열도 배열과 같이 인덱스를 통해 특정 문자에 접근할 수 있습니다.


```c
#include <stdio.h>

int main() {
  char greeting[] = "hello";

  printf("%c\n", greeting[0]);
  printf("%c\n", greeting[1]);
  printf("%c\n", greeting[2]);
  printf("%c\n", greeting[3]);
  printf("%c\n", greeting[4]);
  
  return 0;
}
```


# 바꾸기

마찬가지로 인덱스를 활용합니다.

```c
#include <stdio.h>

int main() {
  char greeting[] = "hello";

  greeting[0] = 'H';

  printf("%s\n", greeting);
  
  return 0;
}
```


# 배열처럼

문자열은 일종의 배열입니다. 따라서 배열처럼 작성할 수 있습니다.

여기서 중요한 점은 배열의 마지막에 \0(널 종료문자)를 반드시 추가해야합니다. \0는 문자열이 끝난다는 것을 프로그램에게 알립니다. 구조적으로 필요할 뿐 실제 사용되거나 출력되진 않습니다


다음은 변수에 hello를 저장하는 과정입니다

```c
char greetings[] = {'h', 'e', 'l', 'l', 'o', '\0'};

printf("%s", greetings); // hello
```