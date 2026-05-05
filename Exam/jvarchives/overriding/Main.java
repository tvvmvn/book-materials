package jvarchives.upcasting;

class Parent {
  char a = 'P';

  void f() {
    System.out.println(1);
  }
}

class Child extends Parent {
  // 멤버 변수는 오버라이딩 되지 않습니다
  char a = 'C';

  void f() {
    System.out.println(2);
  }
} 

public class Main {
  public static void main(String[] args) {
    Parent o = new Child();

    System.out.println(o.a);
    o.f();
  }
}

// P
// 2