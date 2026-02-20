package oop3extends.p0interface.e0multiple;

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

public class Main {
  public static void main(String[] args) {
    
  }
}
