package javacode.year20.round3q15;

public class Main {
  public static void main(String[] args) {
    int a = 0, sum = 0;

    while (a < 10) {
      a++;
      
      if (a % 2 == 1) 
        continue;

      sum += a;
    }

    System.out.println(sum);
  }
}