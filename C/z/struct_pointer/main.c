#include <stdio.h>
#include <string.h>

typedef struct {
  char name[10];
  int age;
} Person;

int main() {
  Person* p;

  strcpy(p->name, "John");
  p->age = 30;

  printf("name: %s, age: %d\n", p->name, p->age);
}

//name: John, age: 30