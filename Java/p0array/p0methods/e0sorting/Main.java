package p0array.p0methods.e0sorting;

import java.util.Arrays;

public class Main {
  public static void main(String[] args) {
    
    int[] nums = {20, 30, 10};

    Arrays.sort(nums);

    for (int num : nums)
      System.out.println(num);
  }
}
