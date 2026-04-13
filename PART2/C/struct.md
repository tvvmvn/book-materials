# 구조체

구조체는 다양한 타입의 값을 함께 저장할 수 있는 자료형입니다. 구조체는 사용자가 직접 정의할 수 있기 때문에 원하는 대로 구성할 수 있습니다.


다음은 구조체를 정의하는 방법입니다.
```
struct 구조체 이름 {
  구조체에 포함할 변수들
}
```


# 구조체 변수 생성하기

다음은 Person 구조체 변수를 만들고 멤버에 접근하는 코드입니다.
멤버에 접근 할 때는 구조체 변수 뒤에 점(.)을 찍고 접근할 멤버의 이름을 씁니다.

```c
#include <stdio.h>

struct Person {
  char data;
  int age;
};

int main() {

  struct Person person = {'A', 30};

  printf("%c\n", person.data);
  printf("%d\n", person.age);
}
```


# 구조체 변수 수정하기

구조체 변수를 수정하기 위해서 값을 재할당하면 됩니다. 

```c
#include <stdio.h>

struct Person {
  char data;
  int age;
};

int main() {

  struct Person person = {'A', 30};

  person.age = 31;

  printf("%d\n", person.age);
}
```


# 값 나중에 할당하기

다음은 구조체 변수를 생성하고 나중에 값을 할당하는 과정입니다.
사용자 입력값으로 나중에 멤버를 정의하고 싶은 경우에 유용합니다.

```c
#include <stdio.h>
#include <string.h>

struct Person {
  char name[10];
  int age;
};

int main() {
  struct Person person;
  
  strcpy(person.name, "John");
  person.age = 30;

  printf("%s\n", person.name);
  printf("%d\n", person.age);
}


// John
// 30
```