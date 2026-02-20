package p0java8.p0stream.p0methods.e0collect;

import java.util.Arrays;
import java.util.List;
import java.util.stream.Collectors;
import java.util.stream.Stream;

public class Main {
  public static void main(String[] args) {
    
    Integer[] nums = {10, 20, 30};
    Stream<Integer> numStream = Arrays.stream(nums);

    List<Integer> list = numStream
        .map(item -> item * 10)
        .collect(Collectors.toList());

    System.out.println(list);
  }
}
