package z.manyconstructors;

class Person {
  String name;
  int age;

  // 나이 정보가 없거나 보호하고 싶은 경우 사용할 수 있는 생성자
  Person(String name) {
    this(name, 0);
  }

  Person(String name, int age) {
    this.name = name;
    this.age = age;
  }
}

public class Main {
  public static void main(String[] args) {
    // 두번째 생성자 사용
    Person john = new Person("John", 30);

    // 첫번째 생성자 사용
    Person jane = new Person("Jane");

    System.out.println(john.age);
    System.out.println(jane.age);
  }
}

// 30
// 0