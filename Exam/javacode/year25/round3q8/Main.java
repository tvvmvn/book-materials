package javacode.year25.round3q8;

interface Person {
  void introduce();
}

class Student implements Person {
  private String name;

  public Student() {
    this.name = "John";
  }

  public void introduce() {
    System.out.println("Hello, my name is " + name);
  }
}

public class Main {
  public static void main(String[] args) {
    Student student = new Student();

    student.introduce();
  }
}
// Hello, my name is John