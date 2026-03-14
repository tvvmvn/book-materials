package more.lambda.interf;

interface Person {
  void greeting();
}

public class Main {
  public static void main(String[] args) {
    Person person = () -> System.out.println("hello");

    person.greeting();
  }
}
