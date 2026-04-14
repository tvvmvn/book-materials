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


# 생성자 

생성자는 객체 생성에 사용되는 함수입니다. 클래스를 선언할 때 컴파일러가 자동으로 추가합니다. 반면 원하는 대로 생성자를 커스텀할 수도 있습니다. 특히 다음과 같이 인스턴스의 속성을 할당할 때 편리합니다. 클래스 내에서 this는 클래스의 인스턴스를 의미합니다. 

만약 생성자나 메서드에서 매개 변수와 멤버의 이름이 다르다면 this를 생략할 수도 있습니다. 한가지 주의할 점은 static 메서드 내에서는 this를 사용할 수 없습니다.


```java
class Person {
  String name;
  int age;

  Person(String name, int age) {
    this.name = name;
    this.age = age;
  }
}

Person person = new Person("John Doe", 30);
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


# 정적 멤버 (static member) 

정적 변수: 쉽게 말해 인스턴스가 아닌 클래스의 속성입니다.
따라서 정적 변수에 접근 할 때는 클래스를 이용합니다.

정적 메서드: 한마디로 클래스의 메서드입니다. 따라서 정적 메서드를 호출할 때는 클래스를 이용합니다. 주의할 점은 정적 메서드는 컴파일 시점에 메모리에 올라가기 때문에 인스턴스 멤버에 접근할 수 없습니다.

```java
package oop01basic.staticmember;

class Korean {
  String name;

  Korean(String name) {
    this.name = name;
  }

  static final String nationality = "Korea";

  static String greeting() {
    return "안녕하세요";
  }
}

public class Main {
  public static void main(String[] args) {
    Korean k1 = new Korean("Kim");
    Korean k2 = new Korean("Lee");

    //instances
    System.out.println(k1.name);
    System.out.println(k2.name);
    
    //static
    System.out.println(Korean.nationality);
    System.out.println(Korean.greeting());
  }
}

// Kim
// Lee
// Korea
// 안녕하세요
```