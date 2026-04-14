package z.staticmethods;

class Example {
  int a;
  static int b = 2;

  // static은 컴파일 시점에 메모리에 올라갑니다.
  // 반면 인스턴스는 실행 중에 메모리에 올라가기 때문에 
  // static 함수가 인스턴스 멤버에 접근하는 것은 타이밍이 맞지 않습니다.
  static void f() {
    // 인스턴스 변수에 접근할 수는 없습니다. (컴파일 에러)
    // System.out.println(a);
    
    // static 메서드에서 static 변수는 호출 가능
    System.out.println(b); 
  }
}

public class Main {
  public static void main(String[] args) {
  }
}
