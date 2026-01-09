# 구조체 수정하기

구조체를 수정하기 위해서 값을 재할당 하면 됩니다. 특히 문자열 멤버를 재할당 하는 부분에 주목하세요. 이전에 배운 strcpy함수가 필요합니다.

```c
struct Person {
  int age;
  char grade;
  char mood[30];
};

struct Person person = {30, 'B', "Good"};

person.age = 31;
person.grade = 'A';
strcpy(person.mood, "Better");
```