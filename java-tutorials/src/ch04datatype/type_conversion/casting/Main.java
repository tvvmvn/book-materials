package ch04datatype.type_conversion.casting;

public class Main {
  public static void main(String[] args) {
    // 실수형
    double weight = 50.25;

    // weight를 50.25에서 50으로 캐스팅
    int truncatedWeight = (int) weight;

    System.out.println(truncatedWeight);
  }
}

// 50