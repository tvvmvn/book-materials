package more.generic.methods;

public class Main {
  // <T> in front of return type
  static <T> void display(T element) {
    System.out.println(element);
  }

  public static void main(String[] args) {
    display(2025);
    display("Hello");
  }
}
