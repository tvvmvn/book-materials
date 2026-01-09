# 구조체와 포인터

구조체에서도 포인터를 활용하는 경우가 많습니다. 포인터를 활용해 구조체의 멤버에 접근할 때는 점(.) 대신 -> (화살표 연산자)를 사용해야 합니다.


```c
struct Car {
  char brand[30];
  int year;
};

int main() {
  struct Car car = {"Toyota", 2020};

  struct Car *ptr = &car;

  printf("%s\n", ptr->brand); // Toyota
  printf("%d\n", ptr->year); // 2020

  return 0;
}
```

