package p0advanced.e0annotation;

public class Main {

  @Deprecated
  static void f() {
    System.out.println("Don't call me");
  }

  public static void main(String[] args) {
    f();
  }
}
