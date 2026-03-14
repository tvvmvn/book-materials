package oop03abstraction.practice;

interface Payment {
  void pay();
}

class ApplePay implements Payment {
  public void pay() {
    System.out.println("apple pay");
  }
}

class KakaoPay implements Payment {
  public void pay() {
    System.out.println("kakao pay");
  }
}

class Client {
  // abstraction in params
  void handlePay(Payment payment) {
    payment.pay();
  }
}

public class Main {
  public static void main(String[] args) {
    // client
    Client client = new Client();

    // different types of payments (polymorphism)
    Payment kakaoPay = new KakaoPay();
    Payment applePay = new ApplePay();

    client.handlePay(kakaoPay);
  }
}
