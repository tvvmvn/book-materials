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

// insert
Node* insertNodeAtPosition(Node* head, Node* newNode, int position) {
  if (position == 1) {
    newNode->next = head;
    return newNode;
  }

  Node* currentNode = head;
  for (int i = 1; i < position - 1 && currentNode != NULL; i++) {
    currentNode = currentNode->next;
  }

  if (currentNode != NULL) {
    newNode->next = currentNode->next;
    currentNode->next = newNode;
  }
  return head;
}

int main() {
  // create nodes
  Node* node1 = createNode(7);
  Node* node2 = createNode(3);
  Node* node3 = createNode(2);
  Node* node4 = createNode(9);

  // connect nodes
  node1->next = node2;
  node2->next = node3;
  node3->next = node4;

  // traverse before
  printf("Original list:\n");
  traverseAndPrint(node1);

  // Insert a new node with value 97 at position 2
  Node* newNode = malloc(sizeof(Node));
  newNode->data = 97;
  node1 = insertNodeAtPosition(node1, newNode, 2);

  // traversse after
  printf("\nAfter insertion:\n");
  traverseAndPrint(node1);

  // 
  free(node1);
  free(node2);
  free(node3);
  free(node4);
  free(newNode);

  return 0;
}

//C
// Original list:
// 7 -> 3 -> 2 -> 9 -> null

// After insertion:
// 7 -> 97 -> 3 -> 2 -> 9 -> null