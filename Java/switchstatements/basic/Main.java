package switchstatements.basic;

public class Main {
  public static void main(String[] args) {
    
    String code = "kr";

    switch (code) {
      case "us":
        System.out.println("America");
        break;
      case "jp":
        System.out.println("Japan");
        break;
      case "kr":
        System.out.println("Korea");
        break;
      default: //option
        System.out.println(".");
    }
  }
}

// Korea
