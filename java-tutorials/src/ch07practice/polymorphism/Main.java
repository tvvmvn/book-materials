package ch07practice.polymorphism;

class Animal {
  void cry() {
    System.out.println("기본 울음소리");
  }
}

class Dog extends Animal {
  @Override
  void cry() {
    System.out.println("멍멍");
  }
}

class Cat extends Animal {
  @Override
  void cry() {
    System.out.println("야옹");
  }
}

class Duck extends Animal {
  @Override
  void cry() {
    System.out.println("꽥꽥");
  }
}

public class Main {
  public static void main(String[] args) throws Exception {

    // animal은 Dog, Cat, Duck 무엇이든 될 수 있습니다.
    Animal animal = new Duck();

    animal.cry();
  }
}

// 꽥꽥