package more.genericclass;

class User<T> {
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
    // 지네릭 인자 - Integer
    User<Integer> user = new User<>(10);

    System.out.println(user.getId());
  }
}

// 10