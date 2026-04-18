package array.twodimension;

public class Main {
  public static void main(String[] args) {
    // 좌표 데이터
    int[][] crds = {{100, 120}, {90, 100}, {110, 100}};

    System.out.printf("row1: %d %d\n", crds[0][0], crds[0][1]);
    System.out.printf("row2: %d %d\n", crds[1][0], crds[1][1]);
    System.out.printf("row3: %d %d\n", crds[2][0], crds[2][1]);
  }
}

// row1: 100 120
// row2: 90 100
// row3: 110 100