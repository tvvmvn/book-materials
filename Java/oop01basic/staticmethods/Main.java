package oop01basic.staticmethods;

// 유틸리티 클래스
class MathTeacher {
  static void add(int a, int b) {
    System.out.println(a + b);
  }

  static void multiply(int a, int b) {
    System.out.println(a * b);
  }
}

public class Main {
  public static void main(String[] args) {
    MathTeacher.add(1, 2);
    MathTeacher.multiply(1, 2);
  }
}

// 3
// 2