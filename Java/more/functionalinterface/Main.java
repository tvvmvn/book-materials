package more.functionalinterface;

@FunctionalInterface
interface Mock {
  int take(int a, int b);
}

public class Main {
  public static void main(String[] args) {
    Mock add = (a, b) -> { return a + b; };

    int result = add.take(1, 2);

    System.out.println(result);
  }
}
