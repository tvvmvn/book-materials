package ch10more.generics.genericclass;

class User<T> { // T: 지네릭 매개변수
  T id;

  User(T id) {
    this.id = id;
  }

  T getId() {
    return this.id;
  }
}

public class Main {
  public static void main(String[] args) {
    // 타입 안정성: 명시한 대로 Integer 값만 입력가능 
    User<Integer> user = new User<>(10);

    // 형변환 필요없음
    Integer id = user.getId();
  }
}