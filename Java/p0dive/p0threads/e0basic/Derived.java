package p0dive.p0threads.e0basic;

public class Derived extends Thread {
  public void run() {
    System.out.println("This code is running in a thread");
  }
}
