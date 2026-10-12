package ch99more.functionalinterface.builtin;

import java.util.function.Consumer;

public class Main {
  public static void main(String[] args) {

    Consumer<String> c = (n) -> System.out.println(n);

    c.accept("foo");
  }
}
