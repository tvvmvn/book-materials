package oop3inheritance.e0override;

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

class Circle extends Shape {
  @Override
  void draw() {
    System.out.println("draw a circle");
  }
}

class Main {
  public static void main(String[] args) {
    
    Shape shape = new Rectangle();

    // draw a rectangle. if you want to draw a circle, 
    // create a instance of Circle.
    shape.draw(); 
  }
}