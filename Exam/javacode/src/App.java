enum Tri {
  A("A Class"), 
  B("B Class"), 
  C("C Class");
  
  private String code;
  
  Tri(String code) {
    this.code = code;
  }

  public String code() {
    return code;
  }
}

public class App {
    public static void main(String[] args) throws Exception {

      // 하나 골라
      Tri myClass = Tri.A;

      System.out.println(myClass.code());
    }
}
