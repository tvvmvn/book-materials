package p0exception.e0throws;

public class Main {
  static void f1() {
    f2();
  }
  
  static void f2() {
    try {
      f3();
    } catch (Exception ex) {
      System.out.println("f2 ex: " + ex.getMessage());
    }
  }
  
  static void f3() throws Exception {
    throw new Exception("Oops!");
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