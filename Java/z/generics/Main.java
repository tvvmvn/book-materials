package z.generics;

class Person<IdType, AddressType> {
  IdType id;
  AddressType address;

  Person(IdType id) {
    this.id = id;
  }
}

class Address<T> {
  T zipCode;
  
  Address(T zipCode) {
    this.zipCode = zipCode;
  }
}

public class Main {
  public static void main(String[] args) {
    
    Person<Long, Address<Integer>> person = new Person<Long, Address<Integer>>(1L);

    person.address = new Address<Integer>(100);
  }
}