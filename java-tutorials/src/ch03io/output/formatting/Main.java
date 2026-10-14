package ch03io.output.formatting;

public class Main {
  public static void main(String[] args) {
    // 입력값
    String to = "Java";

    // 서식: Hello ___
    System.out.printf("Hello %s\n", to);
  }
}

// Hello Java