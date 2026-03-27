package exceptionhandling.basic;

public class Main {
  public static void main(String[] args) {
    
    int n = 2 / 0;
  
    System.out.println(n);
  }
}


// Exception in thread "main" java.lang.ArithmeticException: / by zero
//         at exceptionhandling.basic.Main.main(Main.java:6)