# 상속

상속은 코드를 재사용하여 프로그래밍의 효율성을 높이는 특성입니다. 하위 클래스가 필요한 멤버들을 부모로부터 상속받음으로써 개발자가 같은 코드를 또 작성할 필요가 없게 만듭니다.

- 기본 사용법
- 덮어쓰기
- super


# 기본 상속

다음은 상속의 가장 기본적인 사용 사례입니다. Car클래스가 Vehicle의 honk 메서드를 상속받았습니다.

```java
class Vehicle {
  public void honk() {
    System.out.println("Tuut, tuut!");
  }
}

class Car extends Vehicle {
  private String modelName = "Mustang";   
}

Car myCar = new Car();

myCar.honk();
```


# 덮어쓰기 (Override)

멤버를 상속받았다고 해서 그대로 사용하는 것을 강제하지는 않습니다. 얼마든지 자식이 원하는 대로 바꿀 수 있습니다. 

```java
class Person {
  void greeting() {
    System.out.println("hello");
  }
}

class Student extends Person {
  void greeting() {
    System.out.println("hello I'm student");
  }
}
```
