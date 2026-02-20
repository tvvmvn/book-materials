package oop1basic.e0overloading;

public class Main {
  static void println(int n) {
    System.out.print(n);
    System.out.println();
  }
  
  static void println(String s) {
    System.out.print(s);
    System.out.println();
  }
  
  public static void main(String[] args) {
    
    // println has many forms
    println("hello");
    println(2025);
  }
}
