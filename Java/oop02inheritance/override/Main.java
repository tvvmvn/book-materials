package oop02inheritance.override;

class Base {
  void doSomething() {
    System.out.println("in a parent way");
  }
}

class Derived extends Base {
  @Override
  void doSomething() {
    System.out.println("in a child way");
  }
}

class Main {
  public static void main(String[] args) {
    Derived d = new Derived();

    d.doSomething(); 
  }
}