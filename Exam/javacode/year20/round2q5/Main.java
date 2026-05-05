package javacode.year20.round2q5;

class Parent {
  void show() {
    System.out.println("parent");
  }
}

class Child extends Parent {
  void show() {
    System.out.println("child");
  }
}

public class Main {
  public static void main(String[] args) {
    Parent pa = new Child();
    
    pa.show();
  }
}