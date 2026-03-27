package z.manyconstructors;

class Person {
  String name;
  int age;

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
    // name and age
    Person john = new Person("John", 30);

    // no age info
    Person jane = new Person("Jane");

    System.out.println(john.age);
    System.out.println(jane.age);
  }
}

// 30
// 0