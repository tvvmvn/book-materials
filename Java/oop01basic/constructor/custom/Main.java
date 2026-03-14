package oop01basic.constructor.custom;

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
    
    Person person = new Person("John Doe", 30);
  }
}
