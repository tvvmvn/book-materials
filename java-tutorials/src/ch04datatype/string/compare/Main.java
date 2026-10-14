package ch04datatype.string.compare;

public class Main {
  public static void main(String[] args) {

    String s1 = "foo";
    String s2 = "foo";
    String s3 = new String("foo");

    // 값 비교
    System.out.println(s1.equals(s2));
    System.out.println(s1.equals(s3));

    // 주소 비교
    System.out.println(s1 == s2);
    System.out.println(s1 == s3);
  }
}

// true
// true
// true
// false