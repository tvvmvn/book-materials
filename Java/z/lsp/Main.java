package z.lsp;

class Rectangle {
  int width, height;

  Rectangle(int width, int height) {
    this.width = width;
    this.height = height;
  }

  int getArea() {
    return width * height;
  }
}

class Square extends Rectangle {
  Square(int width, int height) {
    super(width, height);
  }
  
  @Override
  int getArea() {
    return width * width;
  }
}

public class Main {
  public static void main(String[] args) {
    Rectangle sq = new Square(10, 5);

    System.out.println(sq.getArea());
  }  
}

// 100