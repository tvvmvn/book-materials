#include <stdio.h>

void isAdult(int age) {
  if (age >= 18) {
    printf("Adult\n");
  } else {
    printf("Not an adult\n");
  }
}

int main() {
  isAdult(7);//Not an adult
  isAdult(18);//Adult
  isAdult(30);//Adult
}