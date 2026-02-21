package oop2extends.e0basic;

class Person {
  String name;

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
    student.name = "John";
    student.grade = 3;
    student.greeting();
  }
}
