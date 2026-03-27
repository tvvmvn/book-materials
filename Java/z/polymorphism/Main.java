package z.polymorphism;

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

class NaverPay implements Payment {
  public void pay() {
    System.out.println("naver pay");
  }
}

public class Main {
  public static void main(String[] args) {
    String input = "Kakao";
    
    Payment payment;
    
    //polymorphism
    if (input.equals("Apple")) {
      payment = new ApplePay();
    } else if (input.equals("Kakao")) {
      payment = new KakaoPay();
    } else if (input.equals("Naver")) {
      payment = new NaverPay();
    } else {
      System.err.println("unknown payment method");
      return;
    }

    payment.pay();
  }
}

// kakao pay