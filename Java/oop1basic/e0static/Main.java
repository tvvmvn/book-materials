package oop1basic.e0static;

final class Trump {
  // contant
  public static final String nationality = "USA";

  public static void saying() {
    System.out.println("You're fired");
  }
}

public class Main {
  public static void main(String[] args) {
    
    System.out.println(Trump.nationality);

    Trump.saying();
  }
}
