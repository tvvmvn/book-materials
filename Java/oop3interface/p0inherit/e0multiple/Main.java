package oop3interface.p0inherit.e0multiple;

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
