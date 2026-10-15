package ch09class04.dip;

// 인터페이스
interface Toy {
  String work();
}

// 구현체
class Lego implements Toy {
  public String work() {
    return "레고 작동중..";
  }
}

// 클라이언트
class Kids {
  // DIP 준수: 구현체(Lego)가 아니라 인터페이스(Toy)에 의존합니다.
  Toy toy;

  Kids(Toy toy) {
    this.toy = toy;
  }

  void play() {
    System.out.println(toy.work());
  }
}

public class Main {
  public static void main(String[] args) {
    // 어떤 장난감도 가지고 놀 수 있음!
    Kids kids = new Kids(new Lego());

    kids.play();
  }
}

// 레고 작동중..