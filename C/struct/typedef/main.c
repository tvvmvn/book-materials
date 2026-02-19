#include <stdio.h>

typedef struct {
  char data;
  int age;
} Person;

int main() {

  Person person = {'A', 30};

  printf("%c\n", person.data);
  printf("%d\n", person.age);
}