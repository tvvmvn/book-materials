package more.exception.handling;

public class Main {
  public static void main(String[] args) {
    try {
      int n = 2 / 0;

      System.out.println(n);
    } catch (Exception e) {
      System.out.println("Exception: " + e);
    }
    // 계속 진행..
  }
}

// Exception: java.lang.ArithmeticException: / by zero