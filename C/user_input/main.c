#include <stdio.h>

int main() {
  char name[10];
  int age;

  printf("your name\n");
  scanf("%s", name);
  
  printf("your age\n");
  scanf("%d", &age);

  printf("your name: %s\n your age: %d", name, age);
}