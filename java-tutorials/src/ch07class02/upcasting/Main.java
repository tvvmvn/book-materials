package ch07class02.upcasting;

class Person {
  int code = 100;
  
  void greeting() {
    System.out.println("hello");
  }
}

class Student extends Person {
  int code = 200;

  void greeting() {
    System.out.println("hello I'm student");
  }
}

public class Main {
  public static void main(String[] args) {
    // 업캐스팅
    Person person = new Student();
    // 속성은 부모를 따라감
    System.out.println(person.code);
    // 메소드는 본인꺼
    person.greeting();
  }
}
// 100
// hello I'm student