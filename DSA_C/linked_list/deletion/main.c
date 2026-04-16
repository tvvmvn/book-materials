#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
  int data;
  struct Node* next;
} Node;

// 노드를 생성하는 함수
Node* createNode(int data) {
  Node* newNode = (Node*)malloc(sizeof(Node));
  if (!newNode) {
    printf("Memory allocation failed!\n");
    exit(1);
  }
  newNode->data = data;
  newNode->next = NULL;
  return newNode;
}

void traverseAndPrint(Node* head) {
  Node* currentNode = head;
  while (currentNode != NULL) {
    printf("%d -> ", currentNode->data);
    currentNode = currentNode->next;
  }
  printf("null\n");
}

// delete
Node* deleteSpecificNode(Node* head, Node* nodeToDelete) {
  if (head == nodeToDelete) {
    Node* newHead = head->next;
    free(head);
    return newHead;
  }

  Node* currentNode = head;
  while (currentNode->next && currentNode->next != nodeToDelete) {
    currentNode = currentNode->next;
  }

  if (currentNode->next == NULL) {
    return head;
  }

  Node* temp = currentNode->next;
  currentNode->next = currentNode->next->next;
  free(temp);

  return head;
}

int main() {
  // create nodes
  Node* node1 = createNode(7);
  Node* node2 = createNode(11);
  Node* node3 = createNode(3);
  Node* node4 = createNode(2);
  Node* node5 = createNode(9);

  // connect nodes
  node1->next = node2;
  node2->next = node3;
  node3->next = node4;
  node4->next = node5;

  // traverse before
  printf("Before deletion:\n");
  traverseAndPrint(node1);

  // delete
  node1 = deleteSpecificNode(node1, node4);

  // traverse after
  printf("\nAfter deletion:\n");
  traverseAndPrint(node1);

  // 
  free(node1);
  free(node2);
  free(node3);
  free(node5);

  return 0;
}

//C
// Before deletion:
// 7 -> 11 -> 3 -> 2 -> 9 -> null

// After deletion:
// 7 -> 11 -> 3 -> 9 -> null