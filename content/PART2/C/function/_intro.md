# 함수 (Function)

함수는 입력을 받고 정해진 연산을 수행한 뒤 결과를 반환하는 작업 단위입니다. 프로그래밍의 꽃이라고 할 수 있습니다.

다음은 함수를 정의하는 방법입니다.

```
반환-자료형 함수이름() {
  작업..
}
```

다음은 함수를 정의하고 호출하는 코드입니다. 함수는 한 번 정의하면 아무때나 몇번이고 호출할 수 있습니다.

```c
// 함수 정의
void myFunction() {
  printf("호출됨");
}

// 함수 호출
myFunction(); 
myFunction(); 
myFunction(); 
```


# 매개 변수와 인자

함수는 입력을 받을 수 있습니다. 함수에 실제 입력되는 값을 인자(arguments)라고 부르고 인자를 나타내는 변수를 매개변수(parameters)라고 부릅니다.

다음은 두 수를 입력받아 합을 구하는 함수입니다.

```c
// 매개변수 x, y
void add(int x, int y) {
  printf("sum: %d", x + y);
}

// 인자는 매번 다를 수 있습니다.
add(5, 3);
add(8, 2);
add(4, 5);
```


# return

함수는 연산의 결과를 반환(return)할 수 있습니다. `return`으로 결과를 반환합니다.
반환하고 나면 함수의 실행이 종료됩니다. 따라서 return 아래에 코드가 있다면 실행되지 않습니다.


```c
int add(int x, int y) {
  return x + y;
}

int sum = add(5, 3);

printf("sum: %d", sum); // 8
```