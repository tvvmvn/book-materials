package oop01basic.instance;

class Person {
  // variables
  String name;
  int age;

  // constructor
  Person() {}
}

public class Main {
  public static void main(String[] args) {
    // call a constructor
    Person person = new Person();
    person.name = "John";
    person.age = 30;

    System.out.println(person.name);
    System.out.println(person.age);
  }
}
