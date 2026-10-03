#include <stdio.h>
#include <string.h>

int main() {
  char s[20] = "hello";
  
  strcat(s, " world");

  printf("%s", s);
}

// hello world
