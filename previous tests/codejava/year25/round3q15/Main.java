package codejava.year25.round3q15;

public class Main {
  public static void main(String[] args) {
    int x = 7, y = 4, z;
    
    z = y % 3 < 3 ? 2 : 1;
    z = z & (z >> 1);
    z = (x > 5 && z <= 3) ? (z * x) : (z / x);
    
    System.out.printf("%d", z);
  }
}
// 0