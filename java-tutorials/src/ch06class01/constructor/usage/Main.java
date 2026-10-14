package ch06class01.constructor.usage;

class Person {
  String name;
  int age;

  // 생성자 
  Person(String name, int age) {
    // this는 인스턴스를 의미합니다.
    this.name = name;
    this.age = age;
  }
}

public class Main {
  public static void main(String[] args) {
    // 인스턴스 생성 및 속성값 할당
    Person person = new Person("John Doe", 30);

    System.out.println(person.name);
    System.out.println(person.age);
  }
}

// John Doe
// 30