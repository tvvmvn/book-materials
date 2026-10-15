package ch09class04.association;

// 반려 동물
class Pet {
  String name;

  Pet(String name) {
    this.name = name;
  }
}

// 사람
class Person {
  String name;
  // Pet은 Person에 포함됩니다
  Pet pet;

  Person(String name, Pet pet) {
    this.name = name;
    this.pet = pet;
  }
}

public class Main {
  public static void main(String[] args) {
    
    Pet pet = new Pet("Pongo");
    Person person = new Person("John", pet);

    System.out.println(person.pet.name);
  }
}

// Pongo