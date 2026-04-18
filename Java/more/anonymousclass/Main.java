package more.anonymousclass;

// Person 인터페이스
interface Person {
  void greeting();
}

public class Main {
  public static void main(String[] args) {
    // Person을 구현한 익명 클래스
    Person person = new Person() {
      public void greeting() {
        System.out.println("hello");
      }
    };

    person.greeting();
  }
}

// hello