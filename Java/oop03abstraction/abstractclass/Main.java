package oop03abstraction.abstractclass;

abstract class Shape {
  abstract void draw();
  
  void normalFunc() {
    System.out.println(".");
  }
}

class Rectangle extends Shape {
  void draw() { 
    System.out.println("draw a rectangle");
  }
}

public class Main {
  public static void main(String[] args) {
    
  }
}
