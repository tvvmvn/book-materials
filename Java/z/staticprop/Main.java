package z.staticprop;

class Korean {
  String name;
  // 몇개의 인스턴스가 만들어졌는지 기억하는 변수입니다.
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