package oop1basic.e0method;

class Person {
  // ..
  void greeting() {
    System.out.println("hello");
  }
}

public class Main {
  public static void main(String[] args) {
    // instance
    Person person = new Person();
    
    person.greeting();// hello
  }
}
