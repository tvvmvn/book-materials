package ch10more.generics.nogenerics;

class User {
  // Object 타입
  Object id;

  User(Object id) {
    this.id = id;
  }

  Object getId() {
    return this.id;
  }
}

public class Main {

  public static void main(String[] args) throws Exception {
    // Integer가 아닌 타입이 들어와도 컴파일 시점에 잡아내지 못함! 
    // 따라서 나중에 형변환 예외(ClassCastException)를 발생시킬 수 있음.
    User user = new User(100);

    // 매번 형변환 필요 
    Integer id = (Integer) user.getId();
  }
}
