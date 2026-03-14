package z.generics;

class Person<IdType, AddressType> {
  Person(IdType id) {
    this.id = id;
  }
  IdType id;
  AddressType address;
}

class Address<T> {
  Address(T zipCode) {
    this.zipCode = zipCode;
  }
  T zipCode;
}

public class Main {
  public static void main(String[] args) {
    
    Person<Long, Address<Integer>> person = new Person<Long, Address<Integer>>(1L);

    person.address = new Address<Integer>(100);
  }
}