package javacode.year25.round1q13;

class Parent {
  int v = 1;
  static int total = 0;

  public Parent() {
    total += (++v);
    show();
  }
  
  public void show() {
    total += total;
  }
}

class Child extends Parent {
  int v = 10;

  public Child() {
    v += 2;
    total += v++;
    show();
  }

  @Override
  public void show() {
    total += total * 2;
  }
}

public class Main {
  public static void main(String[] args) {
    new Child();

    System.out.println(Parent.total);
  }
}
// 54