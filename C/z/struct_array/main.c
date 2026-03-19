#include <stdio.h>

typedef struct Person {
  char name[10];
  int age;
} Person;

int main() {
  Person persons[] = {"John", 30, "Jane", 25, "Mary", 40};

  for (int i = 0; i < 3; i++) {
    printf("%s (%d)\n", persons[i].name, persons[i].age);
  }
}