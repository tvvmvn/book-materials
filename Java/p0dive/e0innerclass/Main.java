package p0dive.e0innerclass;

public class Main {
  public static void main(String[] args) {

    Oreo oreo = new Oreo();

    Oreo.Cream cream = oreo.new Cream();

    System.out.println(oreo.o + cream.c); 
  }
}
