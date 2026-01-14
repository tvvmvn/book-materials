package codejava.year25.round2q9;

public class Main {
  static interface F {
    int apply(int x);
  }

  public static int run(F f) {
    try {
      return f.apply(3);
    } catch (Exception e) {
      return 7;
    }
  }

  public static void main(String[] args) {
    F f = (x) -> {
      if (x > 2) {
        throw new RuntimeException();
      }
      return x * 2;
    };

    System.out.print(run(f) + run((int n) -> n + 9));
  }
}
// 19