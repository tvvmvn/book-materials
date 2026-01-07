#include <stdio.h>

struct node {
  int data;
  struct node *Next;
};

int main() {
  struct node *head = NULL;
  struct node a = {10, 0};
  struct node b = {20, 0};
  struct node c = {30, 0};
  head = &a;
  a.Next = &b;
  b.Next = &c;
  printf("%d", head->Next->data);
}
// 20