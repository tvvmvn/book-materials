#include <stdio.h>
#include <stdlib.h>

// 트리의 노드
typedef struct TreeNode {
  // 트리의 데이터
  char data;
  // 왼쪽 자식을 가리키는 포인터
  struct TreeNode* left;
  // 오른쪽 자식을 가리키는 포인터
  struct TreeNode* right;
} TreeNode;

// 노드를 생성하는 함수
TreeNode* createNewNode(char data) {
  // 노드를 위한 공간을 할당합니다
  TreeNode* newNode = (TreeNode*)malloc(sizeof(TreeNode));
  // 데이터 할당
  newNode->data = data;
  // 일단 자식을 가리키는 포인터는 null 상태입니다. (나중에 연결합니다)
  newNode->left = NULL;
  newNode->right = NULL;
  // 생성된 노드 반환
  return newNode;
}

// 노드를 순회하는 함수 (Preorder 순회)
void preOrderTraversal(TreeNode* root) {
  if (root == NULL) {
    return;
  }
  // 노드의 데이터를 출력합니다
  printf("%c, ", root->data);
  // 왼쪽 영역으로 이동합니다
  preOrderTraversal(root->left);
  // 오른쪽 영역으로 이동합니다
  preOrderTraversal(root->right);
}

int main() {
  // 각 노드를 생성합니다
  TreeNode* root = createNewNode('R');
  TreeNode* nodeA = createNewNode('A');
  TreeNode* nodeB = createNewNode('B');
  TreeNode* nodeC = createNewNode('C');
  TreeNode* nodeD = createNewNode('D');
  TreeNode* nodeE = createNewNode('E');
  TreeNode* nodeF = createNewNode('F');
  TreeNode* nodeG = createNewNode('G');

  // 노드들을 연결해 트리를 생성합니다
  root->left = nodeA;
  root->right = nodeB;
  nodeA->left = nodeC;
  nodeA->right = nodeD;
  nodeB->left = nodeE;
  nodeB->right = nodeF;
  nodeF->left = nodeG;

  // 트리를 전위 순회합니다 
  preOrderTraversal(root);

  // 메모리 해제
  free(nodeG);
  free(nodeF);
  free(nodeE);
  free(nodeB);
  free(nodeC);
  free(nodeD);
  free(nodeA);
  free(root);

  return 0;
}

//C
// R, A, C, D, B, E, F, G, 
