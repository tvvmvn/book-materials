package ch04datatype.array.matrix;

public class Main {
  public static void main(String[] args) {
    // 좌표 데이터
    int[][] crds = {{100, 120}, {90, 100}, {110, 100}};

    // 1행
    System.out.printf("(%d, %d)\n", crds[0][0], crds[0][1]);
    // 2행
    System.out.printf("(%d, %d)\n", crds[1][0], crds[1][1]);
    // 3행
    System.out.printf("(%d, %d)\n", crds[2][0], crds[2][1]);
  }
}

// (100, 120)
// (90, 100)
// (110, 100)