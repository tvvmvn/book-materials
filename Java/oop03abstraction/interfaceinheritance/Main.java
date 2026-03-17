package oop03abstraction.interfaceinheritance;

// 1층: 가장 기본적인 기능
interface 마우스 {
  void click();
}

interface 휠마우스 extends 마우스 {
  void scroll();
}

public class Main {
  public static void main(String[] args) {
    
  }
}
