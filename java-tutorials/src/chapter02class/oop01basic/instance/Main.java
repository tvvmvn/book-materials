package chapter02class.oop01basic.instance;

class Person {
  // 클래스 멤버
  String name;
  int age;
}

public class Main {
  public static void main(String[] args) {
    // Person의 인스턴스를 생성합니다
    Person person = new Person();
    // 인스턴스의 각 속성에 값을 할당합니다
    person.name = "John";
    person.age = 30;

    // 인스턴스에 접근합니다
    System.out.println(person.name);
    System.out.println(person.age);
  }
}

// John
// 30