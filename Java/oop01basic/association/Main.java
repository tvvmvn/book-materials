package oop01basic.association;

class Address {
  int zipCode;
}

class Person {
  String name;
  Address address;
}

public class Main {
  public static void main(String[] args) {
    //address
    Address address = new Address();
    address.zipCode = 100;

    //person
    Person person = new Person();
    person.name = "John Doe";
    person.address = address;

    System.out.println(person.address.zipCode);
  }
}
