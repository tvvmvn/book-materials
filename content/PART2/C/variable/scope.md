# 

- 지역 변수
- 전역 변수


함수 안에 있는 변수를 그 함수의 지역 변수라고 합니다.
지역 변수는 그 함수 안에서만 접근할 수 있습니다.

```c
void myFunction() {
  // myFunction의 지역 변수
  int x = 5;

  printf("%d", x);
}

int main() {
  myFunction();
  return 0;
}
```


어떤 함수에도 포함되지 않는 변수를 전역 변수라고 합니다.
전역 변수는 어디서든지 접근할 수 있습니다.

```c
// 전역 변수
int x = 5;

void myFunction() {
  // We can use x here
  printf("%d", x);
}

int main() {
  myFunction();

  // We can also use x here
  printf("%d", x);
  return 0;
}
```