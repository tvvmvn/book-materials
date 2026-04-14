package lab;

import java.util.function.Consumer;

public class Main {
  public static void main(String[] args) {
    // functional interface
    Consumer<String> consumer = (d) -> System.out.println(d);

    consumer.accept("hello");
  }  
}
