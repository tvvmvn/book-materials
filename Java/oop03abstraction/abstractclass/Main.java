package oop03abstraction.abstractclass;

abstract class Person {
  abstract void greeting();
  
  void walk() {
    System.out.println("walking..");
  }
}

class Korean extends Person {
  void greeting() { 
    System.out.println("안녕하세요");
  }
}

class Japanese extends Person {
  void greeting() { 
    System.out.println("곤니치와");
  }
}

public class Main {
  public static void main(String[] args) {
    Korean korean = new Korean();
    Japanese janpanese = new Japanese();

    korean.greeting();
    janpanese.greeting();
  }
}
