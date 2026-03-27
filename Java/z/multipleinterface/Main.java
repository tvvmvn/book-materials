package z.multipleinterface;

interface Camera {
  void takePhoto();
}

interface Phone {
  void call();
}

interface SmartPhone extends Phone, Camera {
  // takePhoto()
  // call()
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