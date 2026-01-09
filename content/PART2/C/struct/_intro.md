# 구조체

구조체는 다양한 타입의 값을 함께 저장할 수 있는 자료형입니다. 구조체는 사용자가 직접 정의할 수 있기 때문에 원하는 대로 구성할 수 있습니다.


다음은 구조체를 정의하는 방법입니다
```
struct 구조체 이름 {
  구조체에 포함할 변수들
}
```


# 구조체 생성하기

다음은 구조체 Person을 정의하고 Person의 변수 생성 및 값을 할당하는 과정입니다.

```c
struct Person {
  int age;
  char grade;
};

int main() {
  struct Person person;

  person.age = 30;
  person.grade = 'B';

  return 0;
}
```


# 문자열 멤버

배열 부분에서 배운 것처럼 아래와 같이 배열을 선언 후 나중에 값을 한꺼번에 할당하는 것은 불가능합니다.

```c
struct Person {
  int age;
  char grade;
  char name[30];  
};

struct Person person;

person.name = "John"; // 에러
```


이전에 문자열 과정에서 배운 strcpy 함수를 활용하면 이 문제를 해결할 수 있습니다. 

```c
struct Person {
  int age;
  char grade;
  char name[30]; // String
};

struct Person person;

strcpy(person.name, "John");
```


# 구조체를 더 쉽게 사용하기

구조체를 완성하는 가장 간단한 방법은 아래처럼 선언 시점에 값을 대입하는 것입니다. 

```c
// Create a structure
struct Person {
  int age;
  char grade;
  char name[30];
};

struct Person person = {30, 'B', "John"};
```