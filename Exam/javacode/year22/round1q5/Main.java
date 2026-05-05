package javacode.year22.round1q5;

class Car implements Runnable {
  int a;
  
  public void run() {
    try {
      while(++a < 100) {
        System.out.println("miles traveled : " + a);
        Thread.sleep(100);
      }
    } catch (Exception E) {}
  }
}

public class Main {
  public static void main(String[] args) {
    Thread t = new Thread(new Car());
    
    t.start();
  }
}
