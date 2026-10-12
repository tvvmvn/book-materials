package ch07inheritance.parentdata;

class Base {
  int n = 2;

  void f() {
    System.out.println("foo");
  }
}

class Derived extends Base {
  Derived() {
    System.out.println(n);
    f();
  }
}

public class Main {
  public static void main(String[] args) {
    new Derived();
  }
}
