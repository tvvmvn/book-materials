#include <stdio.h>

typedef struct Person {
  char name[10];
  int age;
} Person;

int main() {
  Person persons[] = {"John", 30, "Jane", 25, "Mary", 40};

  printf("name: %s\n", persons[0].name);//John
  printf("age: %d\n", persons[0].age);//30
}