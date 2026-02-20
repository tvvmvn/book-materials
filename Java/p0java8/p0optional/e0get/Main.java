package p0java8.p0optional.e0get;

import java.util.Optional;

public class Main {
  public static void main(String[] args) {
    
    Optional<String> o = Optional.of("foo");

    // foo
    System.out.println(o.get());
  }
}
