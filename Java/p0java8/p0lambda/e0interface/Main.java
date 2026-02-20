package p0java8.p0lambda.e0interface;

interface Person {
  void greeting();
}

public class Main {
  public static void main(String[] args) {
    Person person = () -> System.out.println("hello");

    person.greeting();
  }
}
