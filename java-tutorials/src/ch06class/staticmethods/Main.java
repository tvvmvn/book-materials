package ch06class.staticmethods;

class Example {
  // 인스턴스 변수
  int a;
  // static 변수
  static int b = 2;

  // 정적 메서드
  static void f() {
    // 정적 필드에 접근 - 가능
    System.out.println(b); 
    // 인스턴스 필드에 접근 - 불가능
    // System.out.println(a); 
  }
}

public class Main {
  public static void main(String[] args) {
  }
}
