package more.thread01;

class Derived implements Runnable {
  public void run() {
    System.out.println("This code is running in a thread");
  }
}

public class Main {
  public static void main(String[] args) {
    
    Thread thread = new Thread(new Derived());

    thread.start();

    System.out.println("This code is outside of the thread");
  }
}
