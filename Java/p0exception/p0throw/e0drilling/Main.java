package p0exception.p0throw.e0drilling;

public class Main {
  static void f1() {
    f2();
  }
  
  static void f2() {
    f3();
  }
  
  static void f3() {
    throw new RuntimeException("Oops!");
  }

  public static void main(String[] args) {
    try {
      f1();
    } catch (Exception e) {
      // ex: Oops!
      System.out.println("main ex: " + e.getMessage());
    }
  }
}
