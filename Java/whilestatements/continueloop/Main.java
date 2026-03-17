package whilestatements.continueloop;

public class Main {
  public static void main(String[] args) {
    int i = 1;
    while (i <= 5) {
      i++;
      if (i == 3) {
        continue;
      }
      System.out.println(i);
    }
  }
}
