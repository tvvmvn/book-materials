package oop02inheritance.superkeyword;

class Person {
  Person() {}

  void greeting() {
    System.out.println("hello");
  }
}

class Student extends Person {
  Student() {}
  
  void introduce() {
    super.greeting();
    System.out.println("I'm student");
  }
}

public class Main {
  public static void main(String[] args) {
    Student student = new Student();

    student.introduce();
  }
}


// hello
// I'm student