package more.casting;

public class Main {
  public static void main(String[] args) {
    // 업캐스팅 (편리함)
    double a = 9; 
    // 10 -> 10.0
    float b = (float) 10 / 3;

    System.out.println(a); 
    System.out.println(b); 
  }
}

// 9.0
// 3.3333333