package oop02inheritance.superconstructor;

class Person {
  String name;
  int age;

  // when Child call super constructor, 'this' means Child.
  Person(String name, int age) {
    this.name = name;
    this.age = age;
  }
}

class Student extends Person {
  int grade;

  Student(String name, int age, int grade) {
    // parent constructor
    super(name, age);
    // child
    this.grade = grade;
  }
}

public class Main {
  public static void main(String[] args) {
    Student student = new Student("John", 20, 4);

    System.out.println(student.name);
    System.out.println(student.age);
    System.out.println(student.grade);
  }
}

// John
// 20
// 4