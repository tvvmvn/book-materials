package lab;

public class Main {
  public static void main(String[] args) {
    int a = 5; // 0101
    int b = 2; // 0010

    System.out.println(a & b);
    System.out.println(a | b);
    System.out.println(a ^ b);
    System.out.println(~a);
    System.out.println(a << 1);
    System.out.println(a >> 1);
  }  
}

// 0
// 7
// 7
// -6
// 10
// 2