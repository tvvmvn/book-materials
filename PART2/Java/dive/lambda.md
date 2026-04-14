# 람다 (Lambda)

Lambda Expressions were added in Java 8.

A lambda expression is a short block of code that takes in parameters and returns a value. 

Lambdas look similar to methods, but they do not need a name, and they can be written right inside a method body.


parameter -> expression
(parameter1, parameter2) -> expression
(parameter1, parameter2) -> {
  // code block
  return result;
}

Consumer: 함수형 인터페이스(메서드가 하나인 인터페이스)

```java
package more.lambda;

import java.util.function.Consumer;

public class Main {
  public static void main(String[] args) {
    // functional interface
    Consumer<String> consumer = (d) -> System.out.println(d);

    consumer.accept("hello");
  }  
}
```