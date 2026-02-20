package p0dive.e0enum;

enum Steak {
  WELL,
  MEDIUMWELL,
  MEDIUMRARE,
  RARE;

  void show() {
    System.out.println(this);
  }
}

public class Main {
  public static void main(String[] args) {
    
    Steak mySteak = Steak.MEDIUMRARE;
    Steak yourSteak = Steak.WELL;

    mySteak.show();
    yourSteak.show();
  }
}
