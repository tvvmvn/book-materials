# 이진 트리의 물리적 구조와 코드 구현

이진 트리의 각 노드는 3개의 공간으로 구성됩니다. 
우선 노드의 데이터를 저장하는 공간 1개가 가운데에 있고 
나머지 두 노드는 각각 왼쪽 자식과 오른쪽 자식의 주소를 저장합니다.

<그림 - 이진 트리의 메모리상 구조>

다음은 위의 이진 트리를 구현하고 E 노드에 방문하는 과정을 나타낸 C 언어 코드입니다. 


```c
#include <stdio.h>
#include <stdlib.h>

typedef struct TreeNode {
  char data;
  struct TreeNode* left;
  struct TreeNode* right;
} TreeNode;

TreeNode* createNewNode(char data) {
  TreeNode* newNode = (TreeNode*)malloc(sizeof(TreeNode));
  
  newNode->data = data;
  newNode->left = NULL;
  newNode->right = NULL;
  
  return newNode;
}

int main() {
  TreeNode* root = createNewNode('R');
  TreeNode* nodeA = createNewNode('A');
  TreeNode* nodeB = createNewNode('B');
  TreeNode* nodeC = createNewNode('C');
  TreeNode* nodeD = createNewNode('D');
  TreeNode* nodeE = createNewNode('E');
  TreeNode* nodeF = createNewNode('F');
  TreeNode* nodeG = createNewNode('G');

  // 노드 간 관계를 형성합니다
  root->left = nodeA;
  root->right = nodeB;

  nodeA->left = nodeC;
  nodeA->right = nodeD;

  nodeB->left = nodeE;
  nodeB->right = nodeF;

  nodeF->left = nodeG;

  // Test
  printf("root->right->left->data: %c\n", root->right->left->data);

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

// root->right->left->data: E
```

