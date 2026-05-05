package javacode.year23.round3q1;

class SuperObject {
  public void draw() {
    System.out.print('A');
    draw();
  }

  public void paint() {
    System.out.print('B');
    draw();
  }
}

class SubObject extends SuperObject {
  public void paint() {
    super.paint();
    System.out.print('C');
    draw();
  }
  
  public void draw() {
    System.out.print('D');
  }
}

public class Main {
  public static void main(String[] args) {
    SuperObject o = new SubObject();

    o.paint();
    o.draw();
  }
} 
// BDCDD
