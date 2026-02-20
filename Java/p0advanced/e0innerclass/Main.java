package p0advanced.e0innerclass;

class Oreo {
  int o = 1;

  class Cream {
    int c = 2;
  }
}

public class Main {
  public static void main(String[] args) {

    Oreo oreo = new Oreo();

    Oreo.Cream cream = oreo.new Cream();

    System.out.println(oreo.o + cream.c); 
  }
}
