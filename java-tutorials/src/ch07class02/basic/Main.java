package ch07class02.basic;

// 부모 클래스
class Parent {
  int n = 2;

  void f() {
    System.out.println("foo");
  }
}

// 자식 클래스
class Child extends Parent {
  Child() {
    // 물려받은 속성에 접근
    System.out.println(super.n);
    // 물려받은 메서드에 접근
    super.f();
  }
}

public class Main {
  public static void main(String[] args) {
    new Child();
  }
}
// 2
// foo
