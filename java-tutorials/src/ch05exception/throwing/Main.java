package ch05exception.throwing;

public class Main {
  public static void main(String[] args) {
    int age = 14;

    try {
      // 성인이 아닌 경우
      if (age < 18) {
        // 예외를 생성하고 catch로 던집니다
        throw new RuntimeException("18세 이상만 가능합니다");
      }
  
      System.out.println("통과!");
    } catch (Exception e) {
      e.printStackTrace();
    }
  }
}

// java.lang.RuntimeException: 18세 이상만 가능합니다
//         at ch05exception.throwing.Main.main(Main.java:10)