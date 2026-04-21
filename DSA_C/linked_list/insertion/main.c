#include <stdio.h>
#include <stdlib.h>

typedef struct _Node {
  int data;
  struct _Node* next;
} Node;

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

// 주어진 위치에 새 노드를 삽입하는 함수
Node* insertNodeAtPosition(Node* head, Node* newNode, int position) {
  // 리스트의 첫번째 자리에 새 노드를 삽입하는 경우
  if (position == 1) {
    // 새 노드가 현재 헤드를 가리키게 만들면 됩니다.
    newNode->next = head;
    return newNode;
  }

  // currentNode는 삽입할 위치 바로 앞에 있는 노드를 저장하는 변수입니다
  Node* currentNode = head;
  // currentNode가 NULL이 된다는 것은 position이 범위를 벗어났다는 의미
  for (int i = 1; i < position - 1 && currentNode != NULL; i++) {
    currentNode = currentNode->next;
  }

  // 문제가 없다면 삽입을 시도합니다
  if (currentNode != NULL) {
    // 우선 2가 9를 가리키게 만들고
    newNode->next = currentNode->next;
    // 3이 2를 가리키게 만듭니다
    currentNode->next = newNode;
  }
  return head;
}

void traverseAndPrint(Node* head) {
  Node* currentNode = head;
  while (currentNode != NULL) {
    printf("%d -> ", currentNode->data);
    currentNode = currentNode->next;
  }
  printf("null");
}

int main() {
  Node* node1 = createNode(7);
  Node* node2 = createNode(10);
  Node* node3 = createNode(3);
  Node* node4 = createNode(9);

  node1->next = node2;
  node2->next = node3;
  node3->next = node4;

  // 새 노드를 추가하기 전 상태를 확인합니다
  printf("Before insertion:\n");
  traverseAndPrint(node1);

  // 리스트에서 4번째 자리에 값이 2인 노드를 삽입하고 싶습니다.
  Node* newNode = malloc(sizeof(Node));
  newNode->data = 2;
  node1 = insertNodeAtPosition(node1, newNode, 4);

  // 노드 추가 후 상태를 확인합니다.
  printf("\nAfter insertion:\n");
  traverseAndPrint(node1);

  free(node1);
  free(node2);
  free(node3);
  free(node4);
  free(newNode);

  return 0;
}

//C
// Original list:
// 7 -> 10 -> 3 -> 9 -> null
// After insertion:
// 7 -> 10 -> 3 -> 2 -> 9 -> null