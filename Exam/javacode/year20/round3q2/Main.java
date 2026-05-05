package javacode.year20.round3q2;

public class Main {
  public static void main(String[] args) {
    int i = 0, c = 0;
    
    while(i < 10) {
      i++;
      c *= i;
    }
    
    System.out.println(c);
  }
}