package stringmethods.format;

public class Main {
  public static void main(String[] args) {
    int year = 2026;

    String greeting = String.format("Happy %d", year);

    System.out.println(greeting); //Happy 2026
  }
}
