package oop1basic.e0constructor.e0multiple;

class Person {
  String name;

  Person() {}

  Person(String name) {
    this.name = name;
  }
}

public class Main {
  public static void main(String[] args) {
    Person person1 = new Person();
    person1.name = "John";
    System.out.println(person1.name);

    Person person2 = new Person("Jane");
    System.out.println(person2.name);
  }
}
