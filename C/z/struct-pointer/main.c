#include <stdio.h>
#include <string.h>

typedef struct {
  char name[10];
  int age;
} Person;

void printPerson(Person* p) { // p is address
  printf("name: %s, age: %d\n", p->name, p->age);
}

int main() {
  Person* p;

  strcpy(p->name, "John");
  p->age = 30;

  printPerson(p);
}
//name: John, age: 30