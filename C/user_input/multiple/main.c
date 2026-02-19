#include <stdio.h>

int main() {
  char name[10];
  int age;

  printf("your name and age\n");
  scanf("%s %d", name, &age);
  
  printf("your name: %s\n your age: %d", name, age);
}