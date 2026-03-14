package oop03abstraction.inherit.multilevel;

interface Vehicle {
  void takePerson();
}

interface Train extends Vehicle  {
  // takePerson()
  void run();
}

interface Airplane extends Vehicle  {
  // takePerson()
  void fly();
}

public class Main {
  public static void main(String[] args) {
    
  }
}
