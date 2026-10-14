package ch05exception.handling;

public class Main {
  public static void main(String[] args) {
    try {
      int n = 2 / 0;

      System.out.println(n);
      // 처리할 예외: Exception 타입 (모든 예외)
    } catch (Exception e) {
      // 예외 처리 로직
      e.printStackTrace();
    }
    System.out.println("계속 진행..");
  }
}

// java.lang.ArithmeticException: / by zero
//         at ch05exception.handling.Main.main(Main.java:6)
// 계속 진행..