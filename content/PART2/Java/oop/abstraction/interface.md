# 인터페이스

자바에서 추상화를 구현할 수 있는 두번째 방법은 인터페이스를 활용하는 것입니다.
인터페이스의 모든 메소드는 추상 클래스이며 인터페이스를 구현하는(implement) 클래스가 정의해야 합니다. 추상 클래스보다 한 단계 더 높은 추상화 구현 도구라고 생각하면 좋습니다. 또한 여러분이 예상한 것과 같이 인스턴스 생성도 불가능합니다.

인터페이스에서
methods are `public abstract` by default
attributes are `public static final` by default


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
