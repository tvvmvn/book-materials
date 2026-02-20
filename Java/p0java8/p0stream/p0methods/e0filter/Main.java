package p0java8.p0stream.p0methods.e0filter;

import java.util.Arrays;
import java.util.stream.Stream;

public class Main {
  public static void main(String[] args) {
    
    Integer[] nums = {10, 20, 30};

    Stream<Integer> numStream = Arrays.stream(nums);

    numStream
      .filter((num) -> num > 10)
      .forEach((num) -> System.out.println(num));
  }
}
