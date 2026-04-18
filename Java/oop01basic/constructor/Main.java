package oop01basic.constructor;

class Person {
  String name;
  int age;

  // 생성자 정의하기
  Person(String name, int age) {
    this.name = name;
    this.age = age;
  }
}

public class Main {
  public static void main(String[] args) {
    // 인스턴스 생성은 곧 생성자 호출을 의미합니다.
    Person person = new Person("John Doe", 30);

    System.out.println(person.name);
    System.out.println(person.age);
  }
}

// John Doe
// 30