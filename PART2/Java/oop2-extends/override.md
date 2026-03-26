# Override

상속은 여러 클래스들이 다형성을 구현하도록 강제하는 역할을 합니다.


```java
class Animal {
  public void animalSound() {
    System.out.println("The animal makes a sound");
  }
}

class Pig extends Animal {
  public void animalSound() {
    System.out.println("The pig says: wee wee");
  }
}

class Dog extends Animal {
  public void animalSound() {
    System.out.println("The dog says: bow wow");
  }
}

Animal myPig = new Pig();
Animal myDog = new Dog();

myPig.animalSound();
myDog.animalSound();
```