package oop3interface.p0inherit.e0multilevel;

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
