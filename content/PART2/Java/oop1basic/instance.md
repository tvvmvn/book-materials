# 인스턴스 (Instance)

클래스는 객체를 생성하기 위한 설명서입니다. 예를 들면 자동차가 객체라면 자동차 설계도가 클래스입니다. 지금부터 인스턴스를 생성하고 사용하는 방법에 대해 알아봅시다.


# 인스턴스 생성하기

다음은 Person의 인스턴스를 생성하고 속성 값을 할당하는 예제입니다.

인스턴스의 속성에 접근하기 위해서 인스턴스 다음에 점(.)을 찍고 접근할 속성을 작성합니다

```java
class Person {
  String name;
  int age;
}

public class Main {
  public static void main(String[] args) {
    // instance
    Person person = new Person();
    person.name = "John";
    person.age = 30;

    // 각 속성에 접근
    System.out.println(person.name);
    System.out.println(person.age);
  }
}
```


# 메서드 (Methods)

인스턴스에 속한 함수를 메서드라고 합니다. 다음은 메서드를 호출하는 방법입니다. 메서드는 기본적으로 함수이므로 괄호를 작성해야 합니다.


```java
class Person {
  // ..
  void greeting() {
    System.out.println("hello");
  }
}

public class Main {
  public static void main(String[] args) {
    // instance
    Person person = new Person();
    
    person.greeting();// hello
  }
}
```


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