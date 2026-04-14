package z.instancecounter;

class User {
  String name;
  // 몇개의 인스턴스가 만들어졌는지 기억하는 변수입니다.
  static int count = 0;

  User(String name) {
    this.name = name;
    count++;
  }
}

public class Main {
  public static void main(String[] args) {
    User user1 = new User("John");
    User user2 = new User("Jane");
    User user3 = new User("Mary");

    System.out.println(User.count); 
  }
}

//3