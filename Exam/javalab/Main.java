package javalab;

class Parent {
  void f() {
    System.out.println(1);
  }
}

class Child extends Parent {
  // void f() {
  //   System.out.println(2);
  // }
} 

public class Main {
  public static void main(String[] args) {
    Parent o = new Child();

    o.f();
  }
}

// 2