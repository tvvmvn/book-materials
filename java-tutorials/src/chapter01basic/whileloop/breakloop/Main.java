package chapter01basic.whileloop.breakloop;

public class Main {
  public static void main(String[] args) {
    int i = 1;
    while (i <= 5) {
      if (i == 3) {
        break;
      }
      System.out.println(i);
      i++;
    }
  }
}

// 1
// 2