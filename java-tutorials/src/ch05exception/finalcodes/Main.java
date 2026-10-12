package ch05exception.finalcodes;

public class Main {
  public static void main(String[] args) {
    try {
      int n = 2 / 0;

      System.out.println(n);
    } catch (Exception e) {
      e.printStackTrace();
    } finally {
      System.out.println("예외 처리문 종료");
    }
  }
}

// java.lang.ArithmeticException: / by zero
//         at ch06exception.finalcodes.Main.main(Main.java:6)
// 예외 처리문 종료