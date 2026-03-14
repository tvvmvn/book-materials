package more.threads.basic;

class Derived extends Thread {
  public void run() {
    System.out.println("This code is running in a thread");
  }
}

public class Main {
  public static void main(String[] args) {
    
    Derived thread = new Derived();

    thread.start();

    System.out.println("This code is outside of the thread");
  }
}
