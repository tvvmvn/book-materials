package operators.increment;

public class Main {
  public static void main(String[] args) {
    int a = 1;
    int b = 1;

    System.out.println(a++);
    System.out.println(++b);

    System.err.println(a);
    System.err.println(b);
  }
}
