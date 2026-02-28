#include <stdio.h>

typedef struct {
  char name[10];
  int age;
} Person;

void printPerson(Person* p) { // p is address
  printf("name: %s, age: %d\n", p->name, p->age);
}

int main() {
  Person person1 = {"John", 30};
  printPerson(&person1);

  Person person2 = {"Jane", 25};
  printPerson(&person2);
}