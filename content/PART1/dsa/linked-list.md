# 연결 리스트 (Linked List)

배열과는 달리 자료를 동적으로 추가하거나 삭제할 수 있는 자료 구조입니다. 마치 쇼핑 카트의 장바구니처럼 말이죠.

*그림 - 연결 리스트*

그렇다면 연결 리스트는 어디에 사용될까요? 자료에 접근하는 경우 보다 자료의 삽입과 삭제가 더 빈번한 경우 적합합니다. 예를 들어 운영체제의 여러 프로세스 관리, 웹 브라우저의 뒤로 가기/앞으로 가기 기능 등에 사용됩니다.


# 물리적 구조와 코드 구현

*그림 - 물리적으로 표현한 연결 리스트*

연결 리스트는 배열과 비교하면 이해하기 쉽습니다. 배열과 달리 요소들이 물리적으로 붙어있지 않고 각 노드가 다음 노드의 주소를 기억하는 방식으로 묶여있습니다. 

따라서 각 노드가 다음 노드의 주소를 기억해야 하기 때문에 추가적인 기억 공간이 필요합니다. 하지만 물리적으로 붙어있지 않기 때문에 자료를 중간에 추가하거나 자료를 삭제하는 등의 작업이 쉽습니다. 연산과 관련된 노드의 주소만 수정해주면 되기 때문입니다.


```c
#include <stdio.h>
#include <stdlib.h>

// Define the Node struct
typedef struct Node {
  int data;
  struct Node* next;
} Node;

// Create a new node
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

// Print the linked list
void printList(Node* node) {
  while (node) {
    printf("%d -> ", node->data);
    node = node->next;
  }
  printf("null\n");
}

int main() {
  // Explicitly creating and connecting nodes
  Node* node1 = createNode(3);
  Node* node2 = createNode(5);
  Node* node3 = createNode(13);
  Node* node4 = createNode(2);

  node1->next = node2;
  node2->next = node3;
  node3->next = node4;

  printList(node1);

  // Free the memory
  free(node1);
  free(node2);
  free(node3);
  free(node4);

  return 0;
}

// 3 -> 5 -> 13 -> 2 -> null
```