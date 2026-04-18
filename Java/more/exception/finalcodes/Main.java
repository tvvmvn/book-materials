package more.exception.finalcodes;

public class Main {
  public static void main(String[] args) {
    try {
      int n = 2 / 0;

      System.out.println(n);
    } catch (Exception e) {
      System.out.println("Exception: " + e);
    } finally {
      System.out.println("추가 작업..");
    }
  }
}

// Exception: java.lang.ArithmeticException: / by zero
// 추가 작업..