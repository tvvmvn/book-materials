#include <stdio.h>
#include <stdlib.h>

typedef struct NodeTag {
  char data;
  struct NodeTag* left;
  struct NodeTag* right;
} Node;

Node* createNewNode(char data) {
  Node* newNode = (Node*)malloc(sizeof(Node));

  if (newNode == NULL) {
    printf("allocation failed\n");
    exit(1);
  }
  
  newNode->data = data;
  newNode->left = NULL;
  newNode->right = NULL;

  return newNode;
}

int main() {
  // 각 노드를 생성합니다.
  Node* root = createNewNode('R');
  Node* nodeA = createNewNode('A');
  Node* nodeB = createNewNode('B');
  Node* nodeC = createNewNode('C');
  Node* nodeD = createNewNode('D');
  Node* nodeE = createNewNode('E');

  // 노드를 연결하여 트리 관계를 형성합니다
  root->left = nodeA;
  root->right = nodeB;
  nodeA->left = nodeC;
  nodeA->right = nodeD;
  nodeB->left = nodeE;

  // E 노드에 접근해봅니다.
  printf("%c", root->right->left->data); //E

  // 메모리 해제
  free(nodeE);
  free(nodeD);
  free(nodeC);
  free(nodeB);
  free(nodeA);
  free(root);

  return 0;
}
