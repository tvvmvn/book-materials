package z.objectcasting;

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
    // person.study();// error

    // Downcasting
    if (person instanceof Student) {
      Student student = (Student) person;
      student.study(); 
    }
  }
}

// Studying