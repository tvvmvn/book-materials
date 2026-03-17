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
    System.out.println("");
  };

  public void call() {
    System.out.println("");
  };
  
  public void playApp() {
    System.out.println("");
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
