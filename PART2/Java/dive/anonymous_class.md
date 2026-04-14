# 익명 클래스

일회용/임시 객체가 필요할 때 익명 클래스로 빠르게 만들 수 있습니다.
익명 클래스는 만들기 위해 인터페이스를 구현하거나 클래스를 상속해야 합니다.

```java
package more.anonymousclass;

interface Person {
  void greeting();
}

public class Main {
  public static void main(String[] args) {
    // 
    Person person = new Person() {
      @Override
      public void greeting() {
        System.out.println("hello");
      }
    };

    person.greeting();
  }
}

// hello
```