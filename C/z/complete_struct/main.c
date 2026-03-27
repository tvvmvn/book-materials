#include <stdio.h>

typedef struct {
  char name[10];
  int age;
} Person;

int main() {
  Person person;

  printf("your name: ");
  scanf("%s", person.name);

  printf("your age: ");
  scanf("%d", &person.age);

  printf("name: %s, age: %d", person.name, person.age);
}

// your name: john
// your age: 30
// name: john, age: 30