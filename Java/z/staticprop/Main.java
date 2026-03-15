package z.staticprop;

class American {
  String name;
  static int population = 0;

  American(String name) {
    this.name = name;
    population++;
  }
}

public class Main {
  public static void main(String[] args) {
    American john = new American("John");
    American jane = new American("Jane");
    American mary = new American("Mary");

    System.out.println(American.population); //3
  }
}