# 재귀 함수


자신을 호출하는 함수를 재귀 함수라고 합니다. 재귀 함수는 반복적인 작업을 할 때 유용합니다.

다음은 재귀함수를 활용해 5!(5의 계승)를 구하는 코드입니다

```c
int factorial(int n) {
  if (n > 1) {
    return n * factorial(n - 1);
  } else {
    return 1;
  }
}

int main() {
  printf("5! : %d", factorial(5));
  
  return 0;
}

```