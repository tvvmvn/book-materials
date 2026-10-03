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

// 입력한 노드를 삭제하는 함수
Node* deleteSpecificNode(Node* head, Node* nodeToDelete) {
  // 첫번째 노드를 삭제하는 경우
  if (head == nodeToDelete) {
    // 헤드를 두번째 노드로 교체합니다
    Node* newHead = head->next;
    // 기존 헤드를 메모리에서 제거합니다
    free(head);
    return newHead;
  }

  // currentNode는 삭제할 노드 바로 앞에 있는 노드를 저장하는 변수입니다
  Node* currentNode = head;
  // currentNode->next가 NULL이 된다는 것은 삭제할 노드가 없다는 뜻입니다
  while (currentNode->next && currentNode->next != nodeToDelete) {
    currentNode = currentNode->next;
  }

  // 삭제할 노드가 존재하지 않는 경우, 함수를 빠져나옵니다
  if (currentNode->next == NULL) {
    return head;
  }

  // currentNode는 3이고 따라서 temp는 2입니다.
  Node* temp = currentNode->next;
  // 3이 9를 가리키게 만듭니다
  currentNode->next = currentNode->next->next;
  // 이제 2를 메모리에서 제거합니다
  free(temp);

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
  Node* node4 = createNode(2);
  Node* node5 = createNode(9);

  node1->next = node2;
  node2->next = node3;
  node3->next = node4;
  node4->next = node5;

  // 삭제 전 리스트 확인
  printf("Before deletion:\n");
  traverseAndPrint(node1);

  // 4번째 노드를 삭제할 것입니다.
  node1 = deleteSpecificNode(node1, node4);

  // 삭제 후 리스트 확인
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
// 7 -> 10 -> 3 -> 2 -> 9 -> null
// After deletion:
// 7 -> 10 -> 3 -> 9 -> null