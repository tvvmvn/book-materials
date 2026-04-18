package more.lambda;

import java.util.function.Consumer;

public class Main {
  public static void main(String[] args) {
    // Consumer(함수형 인터페이스)를 정의합니다
    Consumer<String> consumer = (d) -> System.out.println(d);

    consumer.accept("hello");
  }  
}

// hello