package ch09class04.polymorphism;

// 부모
class Animal {
  void cry() {
    System.out.println("기본 울음소리");
  }
}

// 자식 1
class Dog extends Animal {
  @Override
  void cry() {
    System.out.println("멍멍");
  }
}

// 자식 2
class Cat extends Animal {
  @Override
  void cry() {
    System.out.println("야옹");
  }
}

// 자식 3
class Duck extends Animal {
  @Override
  void cry() {
    System.out.println("꽥꽥");
  }
}

public class Main {
  public static void main(String[] args) throws Exception {

    // 다형성: animal은 Dog, Cat, Duck 무엇이든 될 수 있습니다.
    Animal animal = new Duck();
    animal.cry();
  }
}

// 꽥꽥