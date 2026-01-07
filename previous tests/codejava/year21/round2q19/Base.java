package codejava.year21.round2q19;

public class Base {
  public static void main(String[] args) {
    Base b = new Base();
    Derived d = new Derived();
    System.out.println(b.sum(3, 2) + d.sum(3, 2));
  }
  int sum(int x, int y) {
    return x + y;
  }
}
class Derived extends Base {
  int sum(int x, int y) {
    return x - y + super.sum(x, y);
  }
}
// 11