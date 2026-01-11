# 변수

클래스의 변수 멤버는 어느 메서드에서도 접근할 수 있습니다

```java
class Person {
  int number = 1;

  void greeting() {
    System.out.println(number);
  }
}

public class Main {
  public static void main(String[] args) {
    Person person = new Person();
    person.greeting();
  }
}
// 1
```


메서드 안에서 선언된 변수는 그 메서드 안에서만 접근할 수 있습니다.

```java
public class Main {
  static void f() {
    int x = 1;
    System.out.println(x); // ok
  }
  public static void main(String[] args) {
    System.out.println(x); // compile error
  }
}
```