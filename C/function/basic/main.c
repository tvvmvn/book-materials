#include <stdio.h>

void myFunction() {
  printf("I just got executed!");
}

int main() {
  myFunction();
  myFunction();
  myFunction();
  
  return 0;
}

// Output
// I just got executed!