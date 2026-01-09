# 함수와 구조체

기본적으로 C 에서는 데이터를 함수에 전달할 때 기존 데이터는 유지되고 복사된 데이터가 함수에 입력됩니다. 그런데 데이터 복사 없이 원본 데이터를 활용하고 싶은 경우, 예를 들면 원본 데이터를 수정해야 하는 경우 등에 포인터 인자는 유용합니다. 다음은 구조체 포인터를 함수에 전달하고 함수를 통해 구조체의 멤버를 수정하는 코드입니다. 


```c
struct Car {
  char brand[30];
  int year;
};

void updateYear(struct Car *c) {
  c->year = 2025;
}

int main() {
  struct Car myCar = {"Toyota", 2020};

  updateYear(&myCar);  

  printf("Year: %d\n", myCar.year); 2025

  return 0;
}
```