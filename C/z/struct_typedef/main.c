#include <stdio.h>

typedef struct {
  char name[10];
  int age;
} Person;

int main() {
  Person person = {"John", 30};

  printf("%s\n", person.name);
  printf("%d\n", person.age);
}


// John
// 30