package ch05exception.multiplecatch;

public class Main {
  public static void main(String[] args) {

    int a = 5, b = 0;

    try {
      System.out.println(a / b);
      // ArithmeticException 처리
    } catch (ArithmeticException e) {
      System.out.println("산술 예외");
      // ArrayIndexOutOfBoundsException 처리
    } catch (ArrayIndexOutOfBoundsException e) {
      System.out.println("배열 범위 예외");
      // 기타 예외 처리
    } catch (Exception e) {
      System.out.println("기타 예외");
    } 
  }
}

// 산술 예외