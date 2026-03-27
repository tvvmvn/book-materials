package z.dip;

interface Toy {
  String work();
}

class Lego implements Toy {
  public String work() {
    return "lego is working";
  }
}

class Kids {
  // dependency inversion
  Toy toy;

  Kids(Toy toy) {
    this.toy = toy;
  }

  void play() {
    System.out.println(toy.work());
    System.out.println("I'm playing now");
  }
}

public class Main {
  public static void main(String[] args) {
    //
    Kids kids = new Kids(new Lego());

    kids.play();
  }
}

// lego is working
// I'm playing now