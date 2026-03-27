package z.staticmethod;

class Korean {
  String name;
  static String language = "한국어";

  Korean(String name) {
    this.name = name;
  }

  static void about() {
    System.out.println("언어: " + language); //ok
    // System.out.println(name); // error
  }
}

public class Main {
  public static void main(String[] args) {
    Korean.about();
  }
}

// 언어: 한국어