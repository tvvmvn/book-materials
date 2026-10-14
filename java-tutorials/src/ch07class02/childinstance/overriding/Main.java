package ch07class02.childinstance.overriding;

class Person {
  void greeting() {
    System.out.println("hello");
  }
}

class Student extends Person {
  // greeting을 자식에서 오버라이딩합니다
  void greeting() {
    System.out.println("hello I'm student");
  }
}

class Main {
  public static void main(String[] args) {
    Student student = new Student();

    student.greeting();
  }
}

// hello I'm student