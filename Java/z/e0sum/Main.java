package z.e0sum;

public class Main {
  public static void main(String[] args) {
    
    // Q. get sum of 1 + .. + 10
    
    int sum = 0;

    for (int i = 1; i <= 10; i++ ) {
      sum += i;
    }

    System.out.println("1 + 2 + .. + 10 = " + sum);
  }
}
