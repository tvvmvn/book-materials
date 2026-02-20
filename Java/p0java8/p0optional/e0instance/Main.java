package p0java8.p0optional.e0instance;

import java.util.Optional;

public class Main {
  public static void main(String[] args) {

    Optional<String> o1 = Optional.empty();
    Optional<String> o2 = Optional.of("foo"); // null X
    Optional<String> o3 = Optional.ofNullable(null);
    Optional<String> o4 = Optional.ofNullable("foo");

    System.out.println(o1); // Optional.empty
    System.out.println(o2); // Optional[foo]
    System.out.println(o3); // Optional.empty
    System.out.println(o4); // Optional[foo]
  }
}
