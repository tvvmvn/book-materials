package oop1basic.e0overloading;

class Calc {
  void add(int a, int b) {
    System.out.println(a + b);
  }

  void add(double a, double b) {
    System.out.println(a + b);
  }
}

public class Main {
  public static void main(String[] args) {
    Calc calc = new Calc();

    calc.add(1, 2);
    calc.add(1.2, 2.5);
  }
}
