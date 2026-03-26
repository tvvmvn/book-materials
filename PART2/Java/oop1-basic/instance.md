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
