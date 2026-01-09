# 구조체 멤버에 접근하기

구조체 다음에 점(.)을 찍고 접근할 멤버를 작성합니다.


```c
struct Person {
  int age;
  char grade;
};

int main() {
  struct Person person;

  person.age = 30;
  person.grade = 'B';

  printf("My number: %d\n", person.age);
  printf("My letter: %c\n", person.grade);

  return 0;
}
```