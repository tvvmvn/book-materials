package p0java8.p0lambda.e0dblcolon;

import java.util.ArrayList;
import java.util.List;

public class Main {
  public static void main(String[] args) {
    
    List<Integer> nums = new ArrayList<Integer>();
    nums.add(10);
    nums.add(20);
    nums.add(30);

    // nums.forEach(num -> System.out.println(num));
    nums.forEach(System.out::println);
  }
}
