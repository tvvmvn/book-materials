#include <stdio.h>

int main() {
  int n = 2;
  char c = 'A';

  void* p = &n;
  p = &c;
}