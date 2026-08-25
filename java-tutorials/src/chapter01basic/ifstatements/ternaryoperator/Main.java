package chapter01basic.ifstatements.ternaryoperator;

public class Main {
  public static void main(String[] args) {
    int age = 20;

    String isAdult = age >= 18 ? "Adult" : "Kids";

    System.out.println(isAdult);
  }
}

// Adult