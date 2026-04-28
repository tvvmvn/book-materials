package oop01basic.constructor;

class Person {
  String name;
  int age;

  // 생성자 정의하기
  Person(String name, int age) {
    // this는 생성중인 인스턴스를 의미합니다.
    this.name = name;
    this.age = age;
  }
}

public class Main {
  public static void main(String[] args) {
    // 생성자를 호출해 객체를 생성합니다.
    Person person = new Person("John Doe", 30);

    System.out.println(person.name);
    System.out.println(person.age);
  }
}

// John Doe
// 30