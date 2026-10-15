package ch10more.innerclass.staticinner;

class Outer {
  // static 내부 클래스
  static class Inner {
    void f() {
      System.out.println("foo");
    }
  }
}

public class Main {
  public static void main(String[] args) {
    // 바로 내부 클래스의 인스턴스 생성 가능
    Outer.Inner inner = new Outer.Inner(); 
    inner.f();
  }
}

// foo