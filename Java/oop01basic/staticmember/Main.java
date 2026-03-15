package oop01basic.staticmember;

class American {
  String name;

  American(String name) {
    this.name = name;
  }

  static final String nationality = "USA";

  static String greeting() {
    return "hello";
  }
}

public class Main {
  public static void main(String[] args) {
    American john = new American("John");
    American jane = new American("Jane");

    //instances
    System.out.println(john.name);
    System.out.println(jane.name);
    
    //static
    System.out.println(American.nationality);
    System.out.println(American.greeting());
  }
}