package ch10more.innerclass.normal;

class Outer {

  // 내부 클래스
  class Inner {
    void f() {
      System.out.println("foo");
    }
  }
}

public class Main {
  public static void main(String[] args) {

    // 먼저 외부 클래스의 인스턴스를 생성해야 함
    Outer outer = new Outer();

    // 내부 클래스의 인스턴스 생성
    Outer.Inner inner = outer.new Inner();
    
    inner.f();
  }
}

// foo