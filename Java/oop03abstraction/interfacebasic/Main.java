package oop03abstraction.interfacebasic;

interface Person {
  void greeting();
  void walk();
}

class Korean implements Person {
  public void greeting() {
    System.out.println("안녕하세요");
  }
  public void walk() {
    System.out.println("walking..");
  }
}

public class Main {
  public static void main(String[] args) {
    Korean korean = new Korean();

    korean.greeting();
    korean.walk();
  }
}

// 안녕하세요
// walking..
