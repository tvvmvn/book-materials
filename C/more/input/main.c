#include <stdio.h>

int main() {
  char name[10];
  int age;

  printf("your name: ");
  scanf("%s", name);
  
  printf("your age: ");
  scanf("%d", &age);

  printf("name: %s, age: %d", name, age);
}

// your name: john
// your age: 30
// name: john, age: 30