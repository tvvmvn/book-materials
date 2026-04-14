# Generics (지네릭)

지네릭은 한마디로 타입 매개변수 입니다. 지네릭을 통해 유연하게 클래스나 메서드를 사용할 수 있습니다.

- 지네릭 클래스
- 지네릭 메서드


# Generic 클래스


```java
package more.genericclass;

class Person<T> {
  T id;

  Person(T id) {
    this.id = id;
  }

  T getId() {
    return this.id;
  }
}

public class Main {
  public static void main(String[] args) {
    // responsive to increase 
    Person<Long> person = new Person<>(10L);

    System.out.println(person.getId());
  }
}

// 10
```


# Generic 메서드


```java
package more.genericmethods;

public class Main {
  // <T> return_type
  static <T> void info(T d) {
    System.out.println("data info:");
    System.out.printf("type: %s\n", d.getClass().getName());
    System.out.printf("value: %s\n", d);
  }

  public static void main(String[] args) {
    info(100);
    info("hello");
  }
}

// data info:
// type: java.lang.Integer
// value: 100
// data info:
// type: java.lang.String
// value: hello
```