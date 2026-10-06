#include <stdio.h>

struct Data {
  int n;
  const char* s;
};

int main() {
  struct Data list[] = {{1, "AB"}, {2, "DC"}, {3, "EB"}};
  struct Data *p = &list[1];

  printf("%s", p->s + (p->n - 1));

  return 0;
}
// C