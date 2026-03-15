package oop02inheritance.override;

class Shape {
  void draw() {
    System.out.println("draw a shape");
  }
}

class Rectangle extends Shape {
  @Override
  void draw() {
    System.out.println("draw a rectangle");
  }
}

class Main {
  public static void main(String[] args) {
    Shape shape = new Rectangle();

    shape.draw(); 
  }
}