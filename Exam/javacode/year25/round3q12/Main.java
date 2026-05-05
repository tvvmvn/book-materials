package javacode.year25.round3q12;

class Rectangle {
  int x, y;

  Rectangle(int x, int y) {
    this.x = x;
    this.y = y;
  }

  int getArea() {
    return x * y;
  }
}

class Square extends Rectangle {
  int s;

  Square(int s) {
    super(s, s);
  }
  
  int getSquareArea() {
    return s * s;
  }
}

public class Main {
  public static void main(String[] args) {
    Square sq = new Square(10);
    
    sq.getArea();
  }  
}
