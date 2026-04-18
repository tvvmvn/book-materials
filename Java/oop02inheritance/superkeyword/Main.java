package oop02inheritance.superkeyword;

class Person {
  Person() {}

  void greeting() {
    System.out.println("hello");
  }
}

class Student extends Person {
  Student() {}
  
  void greeting() {
    // 부모의 greeting 메서드를 호출합니다
    super.greeting();
    System.out.println("I'm student");
  }
}

public class Main {
  public static void main(String[] args) {
    Student student = new Student();

    student.greeting();
  }
}

// hello
// I'm student