package more.functionalinterface;

interface Person {
  void greeting();
}

public class Main {
  public static void main(String[] args) {
    // define greeting
    Person person = () -> System.out.println("hello");

    person.greeting();
  }
}

// hello
