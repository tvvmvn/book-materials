package p0advanced.p0generic.e0method;

public class Main {

  static <T> void display(T element) {
    System.out.println(element);
  }

  public static void main(String[] args) {
    display(2025);
    display("Hello");
  }
}
