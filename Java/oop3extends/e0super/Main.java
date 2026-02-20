package oop3extends.e0super;

class Person {
  void greeting() {
    System.out.println("hello");
  }
}

class Student extends Person {
  void introduce() {
    super.greeting();
    System.out.println("friends");
  }
}

public class Main {
  public static void main(String[] args) {
    Student student = new Student();
    student.introduce();
  }
}
