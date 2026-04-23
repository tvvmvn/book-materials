package lab;

import java.util.function.Consumer;

public class Main {
  public static void main(String[] args) {
    Consumer<String> consumer = new Consumer<String>() {
      @Override
      public void accept(String t) {
        System.out.print(t);  
      };
    };

    consumer.accept("hello");
  }  
}

// hello