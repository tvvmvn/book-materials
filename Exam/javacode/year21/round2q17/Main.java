package javacode.year21.round2q17;

public class Main {
  static String check(int num) {
    return (num >= 0) ? "positive" : "negative";
  }
  
  public static void main(String[] args) {
    System.out.print(Main.check(1));
  }
}
// positive