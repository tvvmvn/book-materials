#include <stdio.h>

struct Person {
  char name[10];
  int age;
};

int main() {
  struct Person person = {"John", 30};

  person.age = 31;

  printf("%d\n", person.age);
}