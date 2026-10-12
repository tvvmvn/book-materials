package ch04datatype.reference;

public class Main {
  public static void fn(String[] arr, String s) {
    arr[0] = "B";
    s = "B";
  }

  public static void main(String[] args) {
    String arr[] = {"A"};
    String s = "A";
    
    fn(arr, s);
    
    System.out.println(arr[0]);
    System.out.println(s);
  }
}
