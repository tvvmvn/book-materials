# 오버로딩 (Overloading)

자바에서는 매개 변수와 반환값의 타입을 다르게 하면 같은 이름의 함수를 여러번 정의하는 것이 가능합니다. 이 특성을 오버로딩이라고 부릅니다.


```java
class Cal {
  int plusMethod(int x, int y) {
    return x + y;
  }

  double plusMethod(double x, double y) {
    return x + y;
  }
}

Cal cal = new Cal();

int myNum1 = cal.plusMethod(8, 5);
double myNum2 = cal.plusMethod(4.3, 6.26);
```
