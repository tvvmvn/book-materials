
public class App {

  static void f(String s) {
    s = "bar";
  }

  public static void main(String[] args) {
    
    String s = "foo";

    f(s);

    System.out.println(s);
  }
}
