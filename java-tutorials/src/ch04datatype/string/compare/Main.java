package ch04datatype.string.compare;

public class Main {
  public static void main(String[] args) {
    String s = "foo";

    // 주소값 비교
    System.out.println(s == "foo");
    System.out.println(s == new String("foo"));
    
    // 내용 비교
    System.out.println(s.equals("foo"));
    System.out.println(s.equals(new String("foo")));
  }
}
