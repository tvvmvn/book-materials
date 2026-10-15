package ch08class03.defineinterface;

// 인터페이스
interface Animal {
  // 추상 메서드
  void cry();
}

// 구현 클래스
class Duck implements Animal {
  // 추상 메서드 구현
  public void cry() { 
    System.out.println("꽥꽥");
  }
}

public class Main {
  public static void main(String[] args) {
    Duck duck = new Duck();

    duck.cry();
  }
}

// 꽥꽥