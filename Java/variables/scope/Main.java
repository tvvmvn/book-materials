package variables.scope;

public class Main {
  static int a = 2;

  static void f() {
    int b = 2;
  }
  public static void main(String[] args) {
    System.out.println(a);
    // System.out.println(b); // error
  }
}
