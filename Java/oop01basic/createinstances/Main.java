package oop01basic.createinstances;

class Person {
  // variables
  String name;
  int age;

  // methods
  void greeting() {
    System.out.println("hello");
  }
}

public class Main {
  public static void main(String[] args) {
    // create an instance
    Person person = new Person();
    person.name = "John";
    person.age = 30;

    System.out.println(person.name);
    System.out.println(person.age);

    person.greeting();
  }
}
