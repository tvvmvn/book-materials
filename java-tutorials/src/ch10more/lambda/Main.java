package ch10more.lambda;

interface Car {
  void drive();
}

public class Main {

  public static void main(String[] args) throws Exception {
    
    // 익명클래스보다 더 간단하게 객체 생성
    Car car = () -> { // 람다
      System.out.println("부릉부릉");
    };

    car.drive();
  }
}
