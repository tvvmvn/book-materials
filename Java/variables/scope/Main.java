package variables.scope;

public class Main {
  // 클래스 변수
  static int a = 2;

  static void f() {
    // 지역 변수
    int b = 2;
  }
  public static void main(String[] args) {
    System.out.println(a);
    // System.out.println(b); // error
  }
}
