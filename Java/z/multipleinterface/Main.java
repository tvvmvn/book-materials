package z.multipleinterface;

interface Camera {
  void takePhoto();
}

interface Phone {
  void call();
}

// 아래와 같이 다수의 인터페이스를 상속받을 수 있습니다.
interface SmartPhone extends Phone, Camera {
  void playApp();
}

class iPhone implements SmartPhone {
  public void takePhoto() {
    System.out.println("taking a picture");
  };

  public void call() {
    System.out.println("calling");
  };
  
  public void playApp() {
    System.out.println("playing an app");
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

// taking a picture
// calling
// playing an app