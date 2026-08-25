package chapter02class.oop01basic.staticdata;

class User {
  String name;
  // 생성된 사용자 수
  static int userCount = 0;

  User(String name) {
    this.name = name;
    userCount++;
  }
}

public class Main {
  public static void main(String[] args) {
    User user1 = new User("John");
    User user2 = new User("Jane");
    User user3 = new User("Mary");

    // 클래스로 접근해야 합니다.
    System.out.println(User.userCount); 
  }
}

//3