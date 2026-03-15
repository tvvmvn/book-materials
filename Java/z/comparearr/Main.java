package z.comparearr;

public class Main {

  public static void main(String[] args) {
    int[] arr1 = {10, 20, 30};

    int[] arr2 = {10, 20, 30};

    int[] arr3 = arr1;

    System.out.println(arr1);
    System.out.println(arr2);
    System.out.println(arr3);

    System.out.println(arr1 == arr2);//false
    System.out.println(arr1 == arr3);//true
  }
}

