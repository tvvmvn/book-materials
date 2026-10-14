package ch06class01.constructor.overriding;

class Person {
  String name;
  int age;

  Person(String name, int age) {
    this.name = name;
    this.age = age;
  }

  // 나이 정보가 없거나 보호하고 싶은 경우 사용할 수 있는 생성자
  Person(String name) {
    // 내부적으로 첫번째 생성자를 활용합니다.
    this(name, 0);
  }
}

public class Main {
  public static void main(String[] args) {
    // 첫번째 생성자 사용: 모든 정보가 있음
    Person john = new Person("John", 30);
    // 두번째 생성자 사용: 나이 정보가 없거나 보호하고 싶을 때
    Person jane = new Person("Jane");

    System.out.println(john.age);
    System.out.println(jane.age);
  }
}

// 30
// 0