package codejava.year22.round2q22;

public class Test {
  public static void main(String[] args) {
    Cond obj = new Cond(3);
    obj.a = 5;
    int b = obj.func();
    System.out.print(obj.a + b);
  }
}

class Cond {
  int a;
  public Cond(int a) {
    this.a = a;
  }
  public int func() {
    int b = 1;
    for (int i = 1; i < a; i++) {
      b += a * i;
    }
    return a + b;
  }
}
// 61