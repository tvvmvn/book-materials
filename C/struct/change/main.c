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