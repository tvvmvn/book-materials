package ch04datatype.array.change;

public class Main {
  public static void main(String[] args) {
    int[] arr = {10, 20, 30};

    // 첫번째 요소를 10 -> 100으로 수정
    arr[0] = 100;

    System.out.println(arr[0]);
  }
}

// 100