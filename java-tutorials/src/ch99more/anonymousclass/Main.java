package ch99more.anonymousclass;

interface Bottle {
  void contain();
}

public class Main {

  public static void main(String[] args) throws Exception {
    
    // 별도로 클래스를 생성할 필요없이 바로 인스턴스 생성 가능.
    Bottle bottle = new Bottle() {
      public void contain() {
        System.out.println("contain water");
      };
    };

    bottle.contain();
  }
}
