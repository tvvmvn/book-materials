package oop2extends.e0casting;

class Person {
  void greeting() {
    System.out.println("Hi");
  }
}

class Student extends Person {
  void study() {
    System.out.println("Studying");
  }
}

public class Main {

  public static void main(String[] args) {

    // Upcasting
    Person person = new Student();
    // Downcasting (put it back)
    Student student = (Student) person;

    person.greeting();
    // person.study(); // error
    
    student.greeting();
    student.study(); 
  }
}
