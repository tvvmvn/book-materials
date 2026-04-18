package z.polymorphism;

// 추상적 개념
interface Payment {
  void pay();
}

// 구현1
class ApplePay implements Payment {
  public void pay() {
    System.out.println("apple pay");
  }
}

// 구현2
class KakaoPay implements Payment {
  public void pay() {
    System.out.println("kakao pay");
  }
}

// 구현3
class NaverPay implements Payment {
  public void pay() {
    System.out.println("naver pay");
  }
}

public class Main {
  public static void main(String[] args) {
    // 카카오페이 결제 요청이 왔다고 가정해봅시다.
    String input = "Kakao";
    
    Payment payment;
    
    // payment 객체는 상황에 따라 다양한 결제 모듈이 될 수 있습니다.
    if (input.equals("Apple")) {
      payment = new ApplePay();
    } else if (input.equals("Kakao")) {
      payment = new KakaoPay();
    } else if (input.equals("Naver")) {
      payment = new NaverPay();
    } else {
      // payment 할당에 실패했으므로 프로그램을 종료합니다.
      System.out.println("unknown payment method");
      return;
    }

    // 결제 처리
    payment.pay();
  }
}

// kakao pay