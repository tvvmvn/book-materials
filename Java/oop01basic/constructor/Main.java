package oop01basic.constructor;

class Person {
  String name;
  int age;

  Person(String name, int age) {
    this.name = name;
    this.age = age;
  }
}

public class Main {
  public static void main(String[] args) {
    // call constructor
    Person person = new Person("John Doe", 30);

    System.out.println(person.name);
    System.out.println(person.age);
  }
}
