# 추상화

추상화는 실제 세계를 컴퓨터에 옮기는 과정에서 큰 도움이 됩니다. 추상 개념을 우선 빠르게 만들고 이 개념을 기반으로 구체적인 설계를 할 수 있습니다.

추상적인 개념은 보편적인 개념을 제공할 뿐 구체적으로는 사용되지 않는 것이 좋습니다. 이것이 바로 추상 클래스가 인스턴스를 생성할 수 없는 이유입니다.


자바에서 추상화를 할 수 있는 2가지 방법이 있습니다

- 추상 클래스 (abstract class)
- 인터페이스 (interface)


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


# 인터페이스

자바에서 추상화를 구현할 수 있는 두번째 방법은 인터페이스를 활용하는 것입니다.
인터페이스의 모든 메소드는 추상 클래스이며 인터페이스를 구현하는(implement) 클래스가 정의해야 합니다. 

추상 클래스보다 한 단계 더 높은 추상화 구현 도구라고 생각하면 좋습니다. 또한 여러분이 예상한 것과 같이 인스턴스 생성도 불가능합니다.

인터페이스의 멤버는 다음의 기본값을 가집니다

변수: public static final
메서드: public abstract


```java
interface Animal {
  void animalSound(); 
}

class Pig implements Animal {
  public void animalSound() {
    System.out.println("The pig says: wee wee");
  }
}

Pig myPig = new Pig();  

myPig.animalSound();
```


# 인터페이스 상속

인터페이스를 상속할 수 있습니다. 인터페이스를 확장

```java
package oop03abstraction.extendsinterface;

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
```