# 생성자

생성자는 인스턴스를 생성할 때 호출되는 함수입니다. 생성자는 클래스와 이름이 같으며 따로 작성하지 않아도 기본적으로 적용됩니다.

```java
class Person {
  String name;
  int age;
}


// 생성자 호출하면 인스턴스가 생성됩니다
Person person = new Person();
```

원하는 대로 생성자를 커스텀할 수도 있습니다. 특히 다음과 같이 인스턴스의 속성을 할당할 때 편리합니다. 생성자에서 this는 클래스의 인스턴스를 의미합니다. this는 매개 변수와 멤버의 이름이 다르다면 생략할 수 있습니다.

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
