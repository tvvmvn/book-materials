#include <stdio.h>

int main() {
  char name[10];
  int age;

  printf("your name and age: ");
  scanf("%s %d", name, &age);
  
  printf("name: %s, age: %d", name, age);
}