package codejava.year25.round2q5;

public class Main {
  public static void fn(String[] data, String s) {
    data[0] = s;
    s = "Z";
  }

  public static void main(String[] args) {
    String data[] = {"A"};
    String s = "B";
    
    fn(data, s);
    
    System.out.print(data[0] + s);
  }
}
// BB