# 정적(static) 멤버 변수

정적 멤버 변수는 쉽게 말해 인스턴스가 아닌 클래스의 속성입니다.
따라서 정적 변수에 접근 할 때는 클래스를 이용합니다.

```java
class MyMath {
  static final double PI = 3.14;
}

public class Main {
  public static void main(String[] args) {
    System.out.println(MyMath.PI);//3.14
  }
}
```


# 정적 메서드 (static methods)

정적 메서드는 한마디로 클래스의 메서드입니다. 따라서 정적 메서드를 호출할 때는 클래스를 이용합니다.

주의할 점은 정적 메서드는 인스턴스와 무관하므로 인스턴스 멤버에 접근할 수 없습니다.


```java
class Calculator {
  int a = 10;
  static int b = 20;

  static void printB() {
    System.out.println(b);
    // System.out.println(a); // error
  }
}

public class Main {
  public static void main(String[] args) {
    Calculator.printB();
  }
}
```