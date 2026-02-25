#include <stdio.h>
#include <stdlib.h>

typedef struct NodeTag {
  int data;
  struct NodeTag* next;
} Node;

Node* createNode(int data) {
  Node* newNode = (Node*)malloc(sizeof(Node));
  
  if (newNode == NULL) {
    printf("메모리 할당에 실패했습니다\n");
    exit(1);
  }

  newNode->data = data;
  newNode->next = NULL;

  return newNode;
}

void printList(Node* node) {
  while (node != NULL) {
    printf("%d => ", node->data);
    node = node->next;
  }
  printf("null\n");
}

int main() {
  // 각 노드를 생성합니다.
  Node* node1 = createNode(10);
  Node* node2 = createNode(20);
  Node* node3 = createNode(30);
  Node* node4 = createNode(40);

  // 노드들을 연결합니다
  node1->next = node2;
  node2->next = node3;
  node3->next = node4;

  // 리스트를 차례대로 순회합니다
  printList(node1);
  // 10 => 20 => 30 => 40 => null

  // 메모리 해제
  free(node1);
  free(node2);
  free(node3);
  free(node4);

  return 0;
}


