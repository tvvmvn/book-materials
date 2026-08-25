package chapter04practice.z02.polymorphism;

// 추상적 결제 모듈
interface Payment {
  void pay();
}

// 구체적 결제 모듈1
class ApplePay implements Payment {
  public void pay() {
    System.out.println("애플페이로 결제 처리중..");
  }
}

// 구체적 결제 모듈2
class KakaoPay implements Payment {
  public void pay() {
    System.out.println("카카오페이로 결제 처리중..");
  }
}

// 구체적 결제 모듈3
class NaverPay implements Payment {
  public void pay() {
    System.out.println("네이버페이로 결제 처리중..");
  }
}

public class Main {
  public static void main(String[] args) {
    // 카카오페이로 결제 요청이 왔다고 가정해봅시다.
    String input = "Kakao";
    
    Payment payment;
    
    // payment는 상황에 따라 다양한 결제 모듈이 될 수 있습니다.
    if (input.equals("Apple")) {
      payment = new ApplePay();
    } else if (input.equals("Kakao")) {
      payment = new KakaoPay();
    } else if (input.equals("Naver")) {
      payment = new NaverPay();
    } else {
      System.out.println("알수 없는 결제 방법");
      return;
    }

    // 결제 처리
    payment.pay();
  }
}

// 카카오페이로 결제 처리중..