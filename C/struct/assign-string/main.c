#include <stdio.h>
#include <string.h>

struct Person {
  char name[30]; // String
  int age;
};

int main() {

  struct Person person;

  // person.name = "John"; // 에러
  strcpy(person.name, "John");

  printf("%s", person.name);
}