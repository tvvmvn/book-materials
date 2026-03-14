# 인터페이스 활용하기

인터페이스의 진가는 바로 추상화를 발휘할 때 입니다.

Client의 handlePay 메서드는 구체적인 클래스가 아니라 추상적인 개념(인터페이스)에 의존합니다. 이는 결제 방식이 달라져도 Client 코드를 수정할 필요가 없음을 의미합니다.

뿐만 아니라 Payment는 여러가지 객체를 가질 수 있습니다. (다형성)


```java
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
```