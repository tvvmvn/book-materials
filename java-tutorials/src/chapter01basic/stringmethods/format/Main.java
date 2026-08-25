package chapter01basic.stringmethods.format;

public class Main {
  public static void main(String[] args) {
    String s = "Java";

    String greeting = String.format("Hello %s", s);

    System.out.println(greeting); 
  }
}

// Hello Java