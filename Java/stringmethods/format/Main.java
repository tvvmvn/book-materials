package stringmethods.format;

public class Main {
  public static void main(String[] args) {
    int year = 2026;

    String greeting = String.format("year: %d", year);

    System.out.println(greeting); 
  }
}

//year: 2026