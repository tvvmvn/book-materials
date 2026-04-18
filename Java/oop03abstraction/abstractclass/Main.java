package oop03abstraction.abstractclass;

abstract class Person {
  // 추상 메서드
  abstract void greeting();
  
  // 일반 메서드
  void walk() {
    System.out.println("walking..");
  }
}

class Korean extends Person {
  // 추상 메서드를 자식 고유의 방법으로 구현합니다
  void greeting() { 
    System.out.println("안녕하세요");
  }
}

public class Main {
  public static void main(String[] args) {
    Korean korean = new Korean();

    korean.greeting();
  }
}

// 안녕하세요