package ch10more.wrapperclass;

public class Main {
  public static void main(String[] args) {
    // 정수형 래퍼클래스
    Integer n = 2;

    // 객체이므로 메서드 사용 가능
    System.out.println(n.getClass().getName());
  }
}

// java.lang.Integer