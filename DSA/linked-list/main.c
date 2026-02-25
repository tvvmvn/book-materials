#include <stdio.h>
#include <stdlib.h>

typedef struct NodeTag {
  int data;
  struct NodeTag* next;
} Node;

Node* createNode(int data) {
  Node* newNode = (Node*)malloc(sizeof(Node));

  // 메모리 할당에 실패할 경우 프로그램을 종료합니다.
  if (newNode == NULL) {
    printf("allocation failed\n");
    exit(1);
  }

  newNode->data = data;
  newNode->next = NULL;

  return newNode;
}

int main() {
  Node* node1 = createNode(10);
  Node* node2 = createNode(20);
  Node* node3 = createNode(30);
  Node* node4 = createNode(40);

  node1->next = node2;
  node2->next = node3;
  node3->next = node4;
  node4->next = NULL;

  // 리스트를 순회합니다.
  Node* current = node1;
  while(current != NULL) {
    printf("%d=>", current->data);
    current = current->next;
  }
  printf("null");

  // 메모리 해제
  free(node4);
  free(node3);
  free(node2);
  free(node1);
}