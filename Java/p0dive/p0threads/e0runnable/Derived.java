package p0dive.p0threads.e0runnable;

public class Derived implements Runnable {
  public void run() {
    System.out.println("This code is running in a thread");
  }
}
