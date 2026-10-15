package ch10more.enumorous.create;

// 요일 enum
enum Days {
  // 상수들
  MON,
  TUE,
  WED,
  THU,
  FRI,
  SAT,
  SUN
}

public class Main {
  public static void main(String[] args) {
    // 열거형 활용
    Days today = Days.FRI;
    System.out.println(today == Days.FRI);
  }
}
// true