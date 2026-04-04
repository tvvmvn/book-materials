package z.staticmethod;

class Korean {
  String name;
  static String language = "한국어";

  Korean(String name) {
    this.name = name;
  }

  // static은 컴파일 시점에 메모리에 올라갑니다.
  // 반면 인스턴스는 실행 중에 메모리에 올라가기 때문에
  // static 함수가 인스턴스 멤버에 접근하는 것은 타이밍이 맞지 않습니다.
  static void about() {
    // static 메서드에서 static 변수는 호출이 가능하지만
    System.out.println("언어: " + language);
    // 인스턴스 변수에 접근할 수는 없습니다. (에러 발생)
    // System.out.println(name); 
  }
}

public class Main {
  public static void main(String[] args) {
    Korean.about();
  }
}

// 언어: 한국어