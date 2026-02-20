# 인스턴스 (Instance)

클래스는 객체를 생성하기 위한 설명서입니다. 예를 들면 자동차가 객체라면 자동차 설계도가 클래스입니다. 지금부터 인스턴스를 생성하고 사용하는 방법에 대해 알아봅시다.


# 인스턴스 생성하기

인스턴스를 생성하고 멤버 값을 할당합니다.
클래스에 속한 여러 개의 인스턴스를 생성할 수 있습니다.

인스턴스의 속성에 접근할 때는 인스턴스 다음에 점(.)을 찍고 접근할 속성을 작성합니다

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

    System.out.println(person.name);
    System.out.println(person.age);
  }
}
```


# 메서드

인스턴스에 속한 함수를 메서드라고 합니다. 다음은 메서드를 호출하는 방법입니다. 메서드는 기본적으로 함수이므로 괄호를 작성해야 합니다.
다음은 인스턴스를 생성하는 방법입니다. 클래스의 생성자를 new 예약어와 함께 호출합니다. 

```java
class Person {
  void greeting() {
    System.out.println("hello");
  }
}

public class Main {
  public static void main(String[] args) {
    // instance
    Person person = new Person();
    person.greeting();
    // hello
  }
}
```


# 속성 수정하기

인스턴스의 속성은 수정할 수도 있습니다. 값을 할당할 때와 마찬가지로 수정할 속성에 값을 재할당하면 됩니다.

```java
public class MyClass {
  int x = 5;
}

public class Main {
  public static void main(String[] args) {
    MyClass myObj = new MyClass();

    myObj.x = 40;

    System.out.println(myObj.x);
  }
}

// 40
```


# static 멤버

또한 클래스는 static 멤버를 가질 수 있습니다. static 멤버는 한 마디로 클래스의 속성입니다. 정적 멤버를 호출할 때는 인스턴스를 생성할 필요가 없습니다. 클래스 자체로 호출할 수 있습니다. 


```java
class MyClass {
  static void myMethod() {
    System.out.println("I just got executed!");
  }
}

public class Main {
  public static void main(String[] args) {
    MyClass.myMethod();
  }
}
// I just got executed!
```