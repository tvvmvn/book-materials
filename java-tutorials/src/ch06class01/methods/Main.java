package ch06class01.methods;

class Person {
  // ..멤버들 (생략)

  // 메서드
  void greeting() {
    System.out.println("hello");
  }
}

public class Main {
  public static void main(String[] args) {
    Person person = new Person();

    // 메서드 호출
    person.greeting();
  }
}

// hello