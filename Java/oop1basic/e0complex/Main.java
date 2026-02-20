package oop1basic.e0complex;

class Printer {}

class Keyboard {}

class Phone {
  Printer printer;
}

class PC {
  Printer printer;
  Keyboard keyboard;
}

public class Main {
  public static void main(String[] args) {
    Printer printer = new Printer();
    Keyboard keyboard = new Keyboard();
    
    Phone phone = new Phone();
    phone.printer = printer;
    
    PC pc = new PC();
    pc.printer = printer;
    pc.keyboard = keyboard;
  }
}
