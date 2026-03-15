package oop01basic.constructor.overloading;

class Person {

  String name;

  // 커스텀 생성자를 추가했을 때 기본 생성자를 계속 쓰고싶은 경우
  // 별도로 기본 생성자를 정의해야합니다.
  Person() {}

  Person(String name) {
    this.name = name;
  }
}

public class Main {
  public static void main(String[] args) {
    // default constructor
    Person person1 = new Person();
    person1.name = "John";

    // custom constructor
    Person person2 = new Person("Jane");
  }
}
