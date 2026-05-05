package javacode.year23.round1q1;

class Static {
  public int a = 20;
  static int b = 0;
}

public class Main {
  public static void main(String[] args) {
    int a = 10;
    Static.b = a;
    Static st = new Static();

    System.out.println(Static.b++);
    System.out.println(st.b);
    System.out.println(a);
    System.out.print(st.a);
  }
}

// 10
// 11
// 10
// 20