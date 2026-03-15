package more.annotation;

interface Person {
  void greeting();
}

class Korean implements Person {
  @Override
  public void greeting() {
    System.out.println("안녕하세요");
  }
}

public class Main {
  public static void main(String[] args) {
  }
}
