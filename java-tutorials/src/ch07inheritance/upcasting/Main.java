package ch07inheritance.upcasting;

class Person {
  int n = 100;
  
  void greeting() {
    System.out.println("hello");
  }
}

class Student extends Person {
  int n = 200;

  void greeting() {
    System.out.println("hello I'm student");
  }
}

public class Main {
  public static void main(String[] args) {
    Person person = new Student();

    // 부모 따라
    System.out.println(person.n);
    // 본인 따라
    person.greeting();
  }
}
// 100
// hello I'm student