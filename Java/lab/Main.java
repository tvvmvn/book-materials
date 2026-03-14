package lab;

public class Main {
  static void f(int[] nums) {
    nums[0] = 100;
  }
  public static void main(String[] args) {
    int[] nums = {10, 20, 30};

    f(nums);

    for (int num : nums) {
      System.out.println(num);
    }
  }
}

