package oop01basic.methods;

class Person {
  // constructor
  Person() {}

  // methods
  void greeting() {
    System.out.println("hello");
  }
}

public class Main {
  public static void main(String[] args) {
    // create an instance
    Person person = new Person();

    person.greeting();
  }
}

// hello