# 다형성

다형성의 사전적 의미는 하나의 개체가 다양한 형태로 분기되는 특성입니다.
프로그래밍에서 다형성은 같은 이름의 메서드가 다른 연산을 수행하는 능력을 뜻합니다.
프로그래밍에서 다형성을 통해 동종의 작업들을 쉽게 구분할 수 있도록 돕습니다.

자바에서 다형성은 다음의 두가지 방법으로 구현될 수 있습니다.

1. overloading
1. override


# Overloading

자바에서는 매개변수와 반환값의 타입을 다르게 하면 같은 이름의 함수를 여러번 정의하는 것이 가능합니다. 이 특성이 오버로딩이며 오버로딩을 사용하면 다형성을 구현할 수 있습니다.

```java
class Cal {
  int plusMethod(int x, int y) {
    return x + y;
  }

  double plusMethod(double x, double y) {
    return x + y;
  }
}

Cal cal = new Cal();

int myNum1 = cal.plusMethod(8, 5);
double myNum2 = cal.plusMethod(4.3, 6.26);
```


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