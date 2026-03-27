package ifstatements.elseif;

public class Main {
  public static void main(String[] args) {
    int age = 20;

    if (age < 18) {
      System.out.println("Kids");
    } else if (age >= 18 && age < 30) {
      System.out.println("20s");
    } else if (age >= 30 && age < 40) {
      System.out.println("30s");
    } else {
      System.out.println("over 40s");
    }
  }
}

// 20s