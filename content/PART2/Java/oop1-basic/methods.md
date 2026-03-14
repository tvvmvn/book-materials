# 메서드 (Methods)

인스턴스에 속한 함수를 메서드라고 합니다. 다음은 메서드를 호출하는 방법입니다. 메서드는 기본적으로 함수이므로 괄호를 작성해야 합니다.


```java
class Person {
  // ..
  void greeting() {
    System.out.println("hello");
  }
}

public class Main {
  public static void main(String[] args) {
    // instance
    Person person = new Person();
    
    person.greeting();// hello
  }
}
```

