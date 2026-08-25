package chapter02class.oop01basic.overloading;

public class Main {
  // 정수형 덧셈을 처리합니다
  static void add(int a, int b) {
    System.out.println(a + b);
  }

  // 실수형 덧셈을 처리합니다
  static void add(double a, double b) {
    System.out.println(a + b);
  }

  public static void main(String[] args) {
    add(1, 2);
    add(1.2, 2.5);
  }
}

// 3
// 3.7