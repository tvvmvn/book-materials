package more.anonymousclass;

interface Person {
  void greeting();
}

public class Main {
  public static void main(String[] args) {
    // 
    Person person = new Person() {
      @Override
      public void greeting() {
        System.out.println("hello");
      }
    };

    person.greeting();
  }
}