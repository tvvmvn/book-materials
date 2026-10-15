
interface Car {
  void drive();
}

public class Main {
  public static void main(String[] args) {
    
    Car car = () -> {
      System.out.println("driving");
    };

    car.drive();
    car.drive();
    car.drive();
  }
}