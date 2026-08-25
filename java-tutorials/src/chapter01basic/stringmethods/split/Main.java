package chapter01basic.stringmethods.split;

public class Main {
  public static void main(String[] args) {
    String s = "Hello Java";  

    String[] arr = s.split(" ");

    System.out.println(arr[0]);
    System.out.println(arr[1]);
  }
}

// Hello
// Java