package ch07class02.basic;

class Base {
  int n = 2;

  void f() {
    System.out.println("foo");
  }
}

class Derived extends Base {
  Derived() {
    // 물려받은 속성에 접근
    System.out.println(super.n);
    // 물려받은 메서드에 접근
    super.f();
  }
}

public class Main {
  public static void main(String[] args) {
    new Derived();
  }
}
// 2
// foo
