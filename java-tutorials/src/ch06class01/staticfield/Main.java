package ch06class01.staticfield;

class User {
  String name;
  // 생성된 사용자 수
  static int userCount = 0;

  User(String name) {
    this.name = name;
    // 인스턴스를 생성하면 userCount를 증가시킵니다
    userCount++;
  }
}

public class Main {
  public static void main(String[] args) {
    User user1 = new User("John");
    User user2 = new User("Jane");
    User user3 = new User("Mary");

    // 정적 속성에 접근하기
    System.out.println(User.userCount); 
  }
}

//3