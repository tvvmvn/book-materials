package p0java8.p0lambda.e0usage;

import java.util.ArrayList;

public class Main {
  public static void main(String[] args) {

    ArrayList<Integer> numbers = new ArrayList<Integer>();

    numbers.add(5);
    numbers.add(9);
    numbers.add(8);

    // simple looping
    numbers.forEach((n) -> System.out.println(n));
  }
}