package oop01basic.instances;

class Person {
  String name;
  int age;
}

public class Main {
  public static void main(String[] args) {
    // instance
    Person person = new Person();
    person.name = "John";
    person.age = 30;

    System.out.println(person.name);
    System.out.println(person.age);
  }
}
