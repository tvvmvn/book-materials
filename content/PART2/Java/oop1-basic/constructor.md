# 생성자 (Constructor)

생성자는 인스턴스를 생성하기 위해 호출하는 일종의 함수입니다. 생성자는 클래스와 이름이 같으며 따로 작성하지 않아도 기본적으로 적용됩니다. 생성자를 호출할 때는 그 앞에 new 예약어를 작성해야 합니다.

```java
class Person {
  String name;
  int age;
}

// 생성자를 호출하면 인스턴스가 생성됩니다
Person person = new Person();
```


# 생성자 변경하기

원하는 대로 생성자를 커스텀할 수도 있습니다. 특히 다음과 같이 인스턴스의 속성을 할당할 때 편리합니다. 클래스 내에서 this는 클래스의 인스턴스를 의미합니다. 

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

# 여러개 생성자

다른 형태를 가진 여러 개의 생성자를 생성할 수 있습니다.(Overrloading)
이 경우 원하는 방식으로 인스턴스를 생성할 수 있습니다.

```java

class Person {
  String name;

  Person() {}

  Person(String name) {
    this.name = name;
  }
}

public class Main {
  public static void main(String[] args) {
    // 첫번째 생성자로 인스턴스 생성
    Person person1 = new Person();
    // 두번째 생성자로 인스턴스 생성
    Person person2 = new Person("Jane");
  }
}
```