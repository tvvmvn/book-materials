# 부모 호출하기

만약 하위 클래스 내에서 부모 클래스의 멤버를 활용하고 싶다면 예약어 super가 있습니다. super는 부모 클래스를 의미합니다.


```java
class Animal {
  public void animalSound() {
    System.out.println("The animal makes a sound");
  }
}

class Dog extends Animal {
  public void animalSound() {
    // 부모의 메서드 호출
    super.animalSound(); 
  }
}
```


# 부모 생성자 호출하기

다음과 같이 부모의 생성자를 호출할 수도 있습니다.

```java
class Animal {
  Animal() {
    System.out.println("Animal is created");
  }
}

class Dog extends Animal {
  Dog() {
    // Call parent constructor
    super(); 
    System.out.println("Dog is created");
  }
}
```