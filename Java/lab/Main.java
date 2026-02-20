package lab;

interface Payment {
  void pay();
}

class KakaoPay implements Payment {
  public void pay() {
    System.out.println("kakao pay");
  }
}

class NaverPay implements Payment {
  public void pay() {
    System.out.println("never pay");
  }
}

public class Main {
  public static void main(String[] args) {
    Payment payment = new KakaoPay();
    // Payment payment = new NaverPay();

    payment.pay(); // kakao or naver
  }
}

