# 추상 클래스

추상화는 실제 세계를 컴퓨터에 옮기는 과정에서 큰 도움이 됩니다. 추상 개념을 우선 빠르게 만들고 이 개념을 기반으로 구체적인 설계를 할 수 있습니다.

자바에서 추상화를 할 수 있는 2가지 방법이 있습니다

- 추상 클래스
- 인터페이스

추상적인 개념은 보편적인 개념을 제공할 뿐 구체적으로는 사용되지 않는 것이 좋습니다. 이것이 바로 추상 클래스가 인스턴스를 생성할 수 없는 이유입니다.

추상 클래스는 추상 메서드와 일반 메서드 둘 다 가질 수 있습니다. 추상 메서드는 추상 클래스에서만 사용될 수 메서드로서 몸체가 없는 함수입니다. 추상 클래스를 상속받은 클래스는 아래와 같이 추상 메서드를 구현해야 합니다.


```java
abstract class Animal {
  // abstract method
  public abstract void animalSound();
}

class Dog extends Animal {
  public void animalSound() {
    System.out.print("Bow wow");
  }
}
```