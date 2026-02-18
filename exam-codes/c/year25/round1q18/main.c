#include <stdio.h>
#include <stdlib.h>

typedef struct Data {
  int value;
  struct Data *next;
} Data;

Data *insert(Data *head, int value) {
  Data *new_node = (Data*)malloc(sizeof(Data));
  new_node->value = value;
  new_node->next = NULL;

  if (head == NULL) 
    return new_node;

  new_node->next = head;
  head = new_node;
  return head;
}

Data *reconnect(Data* head, int disconnect_count) {
  Data* prev = head, *curr = head->next;

  while (curr && curr->value != disconnect_count) {
    prev = curr;
    curr = curr->next;
  }
  
  if (curr == NULL) return head;

  prev->next = curr->next;
  curr->next = head;
  return curr;
}

int main() {
  Data *head = NULL, *curr = NULL, *tmp = NULL;
  int i;
  
  for (i = 1; i <= 5; i++)
    head = insert(head, i);

  head = reconnect(head, 3);

  for (curr = head; curr != NULL; curr = curr->next)
    printf("%d", curr->value);

  while (head) {
    tmp = head;
    head = head->next;
    free(tmp);
  }

  return 0;
}
// 35421