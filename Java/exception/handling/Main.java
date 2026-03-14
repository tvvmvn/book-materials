package exception.handling;

public class Main {
  public static void main(String[] args) {
    try {
      int n = 2 / 0;

      System.out.println(n);
      
    } catch (Exception e) {
      System.out.println("Exception: " + e);
    }
  }
  // still working (no crash)..
}
