package ch10more.anonymousclass;

interface Car {
  void drive();
}

public class Main {

  public static void main(String[] args) throws Exception {
    
    // 바로 인스턴스 생성 가능
    Car car = new Car() { // 익명 클래스 
      public void drive() {
        System.out.println("부릉부릉");
      };
    };

    car.drive();
  }
}
// 부릉부릉