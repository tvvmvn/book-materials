package ch10more.enumorous.extended;

enum Days {
  // 상수들
  MON("Monday"),
  TUE("Tuesday"),
  WED("Wednesday"),
  THU("Thursday"),
  FRI("Friday"),
  SAT("Saturday"),
  SUN("Sunday");
  
  // 보여주기용 이름
  private String displayName;
  
  // 생성자 (private이 기본값)
  private Days(String displayName) {
    this.displayName = displayName;
  }

  // 메서드
  public String displayName() {
    return displayName;
  }
}

public class Main {
  public static void main(String[] args) {
    for (Days day : Days.values()) {
      System.out.println(day.name()  + ": " + day.displayName());
    }
  }
}
// MON: Monday
// TUE: Tuesday
// WED: Wednesday
// THU: Thursday
// FRI: Friday
// SAT: Saturday
// SUN: Sunday