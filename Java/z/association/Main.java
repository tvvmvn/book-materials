package z.association;

class Pet {
  String name;

  Pet(String name) {
    this.name = name;
  }
}

class Person {
  String name;
  Pet pet;

  Person(String name, Pet pet) {
    this.name = name;
    this.pet = pet;
  }
}

public class Main {
  public static void main(String[] args) {
    //pet
    Pet pet = new Pet("Pongo");

    //person
    Person person = new Person("John", pet);

    System.out.println(person.pet.name);
  }
}
