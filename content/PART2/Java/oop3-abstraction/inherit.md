# 인터페이스 상속

인터페이스를 상속할 수 있습니다. 인터페이스를 확장


# 다층 상속


```java
interface Vehicle {
  void takePerson();
}

interface Train extends Vehicle  {
  // takePerson()
  void run();
}

interface Airplane extends Vehicle  {
  // takePerson()
  void fly();
}

public class Main {
  public static void main(String[] args) {
    
  }
}
```


# 여러 인터페이스 상속


```java
interface Camera {
  void takePhoto();
}

interface Phone {
  void call();
}

interface SmartPhone extends Phone, Camera {
  // takePhoto()
  // call()
  void playApp();
}

public class Main {
  public static void main(String[] args) {
    
  }
}
```