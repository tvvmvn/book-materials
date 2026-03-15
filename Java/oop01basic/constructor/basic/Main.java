package oop01basic.constructor.basic;

class Person {
  String name;
  int age;
  
  // omittable
  Person() {}
}

public class Main {
  public static void main(String[] args) {
    // call default constructor
    Person person = new Person();

    person.name = "John Doe";
    person.age = 30;

    System.out.println(person.name);
    System.out.println(person.age);
  }
}
