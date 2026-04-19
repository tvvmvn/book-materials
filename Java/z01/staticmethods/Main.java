package z01.staticmethods;

class Example {
  // 인스턴스 변수
  int a;
  // static 변수
  static int b = 2;

  static void f() {
    // System.out.println(a); // error
    System.out.println(b); // ok
  }
}

public class Main {
  public static void main(String[] args) {
  }
}
