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