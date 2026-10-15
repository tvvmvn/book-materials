package ch09class04.singleton;

class Singleton {
  // 싱글턴 인스턴스
  private static final Singleton instance = new Singleton();

  // private 생성자: 외부로부터 인스턴스 생성 차단
  private Singleton() {}

  // 같은 인스턴스를 반환함
  public static Singleton getInstance() {
    return instance;
  }
}

public class Main {
  public static void main(String[] args) {
    // 두 변수는 같은 객체를 가리킴
    Singleton singleton1 = Singleton.getInstance();
    Singleton singleton2 = Singleton.getInstance();

    // 일치
    System.out.println(singleton1 == singleton2);
  }  
}

// true
