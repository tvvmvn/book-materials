#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 셋의 최대 버킷수
#define BUCKET_COUNT 10
// 문자열 최대 길이
#define MAX_STRING_LENGTH 256 

// 각 버킷에 담기는 노드
typedef struct Node {
  // 노드의 데이터
  char value[MAX_STRING_LENGTH]; 
  // 다음 노드를 가리키는 포인터
  struct Node* next;
} Node;

// 해시셋 구조체
typedef struct {
  // 해시셋은 여러 개의 버킷들로 구성됩니다
  Node* buckets[BUCKET_COUNT];
} SimpleHashSet;

// 해시 자료형의 핵심인 해시 함수입니다
unsigned int hashFunction(const char* value) {
  // 해시키를 생성하는 알고리즘
  unsigned int hash = 0;
  while (*value) {
    hash = (hash + *value++) % BUCKET_COUNT;
  }
  // 해시키 반환
  return hash;
}

// 해시셋을 초기화하는 함수
void initHashSet(SimpleHashSet* set) {
  for (int i = 0; i < BUCKET_COUNT; i++) {
    set->buckets[i] = NULL;
  }
}

// 특정 값이 셋에 포함됬는지 확인하는 함수
int contains(SimpleHashSet *set, const char *value) {
  // 해시 함수로 해시키를 구합니다
  unsigned int index = hashFunction(value);
  // 해시키로 한번에 값이 위치한 버킷을 찾을 수 있습니다! (해시 테이블의 강점)
  Node *node = set->buckets[index];

  // 이제 버킷 내에서 값을 찾을 차례입니다
  while (node != NULL) {
    // 값을 찾았습니다
    if (strcmp(node->value, value) == 0) {
      return 1; // Found
    }
    // 다음 노드로 이동합니다
    node = node->next;
  }

  return 0; // 찾고자 하는 값이 셋에 없는 경우 0 반환
}

void removeValue(SimpleHashSet *set, const char *value) {
  unsigned int index = hashFunction(value);
  Node **node = &(set->buckets[index]);
  while (*node != NULL) {
    if (strcmp((*node)->value, value) == 0) {
      Node *toDelete = *node;
      *node = (*node)->next;
      free(toDelete); // Just free the node, not toDelete->value
      return; // Value removed
    }
    node = &((*node)->next);
  }
}

// 해시셋에 데이터를 추가하는 함수
void add(SimpleHashSet* set, const char* value) {
  // 입력값을 바탕으로 해시키를 생성합니다
  unsigned int index = hashFunction(value);
  
  // 이미 데이터가 해시셋에 존재하는지 검사하는 부분
  Node* current = set->buckets[index];
  while (current != NULL) {
    // 데이터가 이미 해시셋에 존재하는 경우
    if (strcmp(current->value, value) == 0) {
      return;
    }
    // 다음 노드로 이동
    current = current->next;
  }
  
  // 새 노드를 생성합니다
  Node* newNode = (Node*)malloc(sizeof(Node));
  // 메모리 할당에 실패하는 경우 작업을 중단합니다
  if (!newNode) return; 
  
  //
  // 노드에 값을 할당하는 과정
  strncpy(newNode->value, value, MAX_STRING_LENGTH);
  newNode->value[MAX_STRING_LENGTH - 1] = '\0'; 
  // 새 노드가 현재 버킷의 첫번째 노드를 가리키도록 만든다음
  newNode->next = set->buckets[index];
  // 새 노드를 첫번째 자리에 놓습니다. 
  set->buckets[index] = newNode;
}

void printHashSet(SimpleHashSet *set) {
  printf("Hash Set Contents:\n");
  for (int i = 0; i < BUCKET_COUNT; i++) {
    Node *node = set->buckets[i];
    printf("Bucket %d: ", i);
    while (node) {
      printf("%s ", node->value);
      node = node->next;
    }
    printf("\n");
  }
}

int main() {
  SimpleHashSet hashSet;
  initHashSet(&hashSet);

  add(&hashSet, "Charlotte");
  add(&hashSet, "Thomas");
  add(&hashSet, "Jens");
  add(&hashSet, "Peter");
  add(&hashSet, "Lisa");
  add(&hashSet, "Adele");
  add(&hashSet, "Michaela");
  add(&hashSet, "Bob");

  printHashSet(&hashSet);

  printf("\n'Peter' is in the set: %s\n", contains(&hashSet, "Peter") ? "true" : "false");
  printf("Removing 'Peter'\n");
  removeValue(&hashSet, "Peter");
  printf("'Peter' is in the set: %s\n", contains(&hashSet, "Peter") ? "true" : "false");
  printf("'Adele' has hash code: %u\n", hashFunction("Adele"));

  // Free memory, omitted for brevity
  return 0;
}

// C
// Hash Set Contents:
// Bucket 0: Jens Thomas 
// Bucket 1: 
// Bucket 2: Peter 
// Bucket 3: Lisa 
// Bucket 4: Charlotte 
// Bucket 5: Bob Adele 
// Bucket 6: 
// Bucket 7: 
// Bucket 8: Michaela 
// Bucket 9: 

// 'Peter' is in the set: true
// Removing 'Peter'
// 'Peter' is in the set: false
// 'Adele' has hash code: 5