package ch06class01.nullobject;

public class Main {
  public static void main(String[] args) {
    
    // null 객체
    String name = null;

    // 사용하기 전에 객체가 NULL인지 확인합니다.
    if (name != null) {
      System.out.println(name.toUpperCase());
    }
  }
}
