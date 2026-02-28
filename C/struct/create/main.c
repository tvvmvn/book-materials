#include <stdio.h>

struct Person {
  char name[10];
  int age;
};

int main() {
  struct Person person = {"John", 30};

  printf("%s\n", person.name);
  printf("%d\n", person.age);
}