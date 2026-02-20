package lab;

class Person {
  String name;
  int age;
}

public class Main {
  public static void main(String[] args) {
    Person p = new Person();
    p.name = "John";
    p.age = 30;

    System.out.println(p.toString());
  }
}

