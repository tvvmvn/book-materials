class Base {
  Base() {
    System.out.println("부모 생성자 호출됨");
  }
}

class Derived extends Base {
  Derived() {
    super(); // 생략 가능
    System.out.println("자식 생성자 호출됨");
  }
}

public class Main {
  public static void main(String[] args) {
    new Derived();
  }
}
// 부모 생성자 호출됨
// 자식 생성자 호출됨