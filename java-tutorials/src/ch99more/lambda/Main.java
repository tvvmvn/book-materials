package ch99more.lambda;

interface Bottle {
  void contain();
}

public class Main {

  public static void main(String[] args) throws Exception {
    
    Bottle bottle = () -> {
      System.out.println("contain water");
    };

    bottle.contain();
  }
}
