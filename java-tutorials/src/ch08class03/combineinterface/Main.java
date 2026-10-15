package ch08class03.combineinterface;

interface Camera {
  void takePhoto();
}

interface Phone {
  void call();
}

// 다수의 인터페이스를 상속받아 큰 인터페이스를 생성할 수 있음
interface SmartPhone extends Phone, Camera {
  void playApp();
}

// 구현 클래스
class iPhone implements SmartPhone {
  public void takePhoto() {
    System.out.println("사진 찍는중");
  };

  public void call() {
    System.out.println("전화중");
  };
  
  public void playApp() {
    System.out.println("앱 실행중");
  }
}

public class Main {
  public static void main(String[] args) {
    SmartPhone iPhone = new iPhone();

    iPhone.takePhoto();
    iPhone.call();
    iPhone.playApp();
  }
}

// 사진 찍는중
// 전화중
// 앱 실행중