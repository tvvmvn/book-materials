package z.staticprop;

class Korean {
  String name;
  static int population = 0;

  Korean(String name) {
    this.name = name;
    population++;
  }
}

public class Main {
  public static void main(String[] args) {
    Korean kim = new Korean("Kim");
    Korean lee = new Korean("Lee");
    Korean park = new Korean("Park");

    System.out.println(Korean.population); 
  }
}

//3