package p0dive.p0threads.e0basic;

public class Main {
  public static void main(String[] args) {
    
    Derived thread = new Derived();

    thread.start();

    System.out.println("This code is outside of the thread");
  }
}
