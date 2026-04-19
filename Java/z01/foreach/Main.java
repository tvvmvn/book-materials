package z01.foreach;

public class Main {
  public static void main(String[] args) {
    int[] arr = {10, 20, 30};

    // item은 arr의 각 요소를 의미합니다
    for (int item : arr) {
      System.out.println(item);
    }
  }
}

// 10
// 20
// 30