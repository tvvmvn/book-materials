package codejava.year24.round3q14;

class B {
  int x = 3;
  int getX() {
    return x * 2;
  }
}

class D extends B {
  int x = 7;
  int getX() {
    return x * 3;
  }
}

public class Test {
  public static void main(String[] args) {
    B a = new D();
    D b = new D();
    System.out.print(a.getX() + a.x + b.getX() + b.x);
  }
}
// 52