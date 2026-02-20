package oop3extends.e0override;

class Shape {
  void draw() {
    System.out.println("draw a shape");
  }
}

class Rectangle extends Shape {
  void draw() {
    System.out.println("draw a rectangle");
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