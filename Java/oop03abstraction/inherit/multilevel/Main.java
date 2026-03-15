package oop03abstraction.inherit.multilevel;

// 1층: 가장 기본적인 기능
interface 마우스 {
  void click();
}

// 2층: 1층을 상속받아 기능을 확장 (다층 상속의 시작)
interface 휠마우스 extends 마우스 {
  void scroll();
}

// 3층: 2층을 다시 상속받아 더 고차원적인 기능 추가
interface 게이밍마우스 extends 휠마우스 {
  void adjustDPI();
}

public class Main {
  public static void main(String[] args) {
    
  }
}
