package oop02inheritance.basic;

class Person {
  String name;
  int age;

  Person() {}
}

class Student extends Person {
  int grade;

  Student() {}
}

public class Main {
  public static void main(String[] args) {
    Student student = new Student();
    
    student.name = "John";
    student.age = 20;
    student.grade = 3;

    System.out.println(student.name);
    System.out.println(student.age);
    System.out.println(student.grade);
  }
}
