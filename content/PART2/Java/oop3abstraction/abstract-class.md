# 추상 클래스

추상 클래스는 추상 메서드와 일반 메서드 둘 다 가질 수 있습니다. 추상 메서드는 추상 클래스에서만 사용될 수 메서드로서 몸체가 없는 함수입니다. 추상 클래스를 상속받은 클래스는 아래와 같이 추상 메서드를 구현해야 합니다.


```java
abstract class Animal {
  // abstract method
  public abstract void animalSound();
  // normal
  
}

class Dog extends Animal {
  public void animalSound() {
    System.out.print("Bow wow");
  }
}
```