package ch07inheritance.staticdata;

class Base {
  static int n = 0;
}

class Derived extends Base {
  Derived() {
    // 부모의 static 변수를 공유합니다.
    n++;
  }
}

public class Main {
  public static void main(String[] args) {
    new Derived();
    new Derived();
    new Derived();

    System.out.println(Base.n);
  }
}
