package oop01basic.staticmembers.methods;

class Calculator {
  int a = 10;
  static int b = 20;

  static void printB() {
    System.out.println(b);
    // System.out.println(a); // error
  }
}

public class Main {
  public static void main(String[] args) {
    Calculator.printB();
  }
}
