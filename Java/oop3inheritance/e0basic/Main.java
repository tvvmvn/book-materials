package oop3inheritance.e0basic;

class Person {
  String name;
  int age;

  void greeting() {
    System.out.println("hello");
  }
}

class Student extends Person {
  int grade;
}

public class Main {
  public static void main(String[] args) {
    Student student = new Student();

    student.greeting();
  }
}
