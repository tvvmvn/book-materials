package ch07class02.casting;

// 부모 클래스
class Animal {
  void cry() {
    System.out.println("울음소리..");
  }
}

// 자식 클래스
class Cat extends Animal {
  void cry() {
    System.out.println("야옹");
  }
  
  // 자식의 독자적인 메서드
  void punch() {
    System.out.println("냥냥펀치!");
  }
}

public class Main {
  public static void main(String[] args) {
    // 부모 타입으로 자식 객체를 생성합니다(업캐스팅)
    Animal animal = new Cat();
    
    // 부모는 자식의 독자적인 메서드를 호출할 수 없습니다.
    // animal.punch(); // error

    // 다운캐스팅 전 검사: Cat의 인스턴스가 맞는지 확인하기
    if (animal instanceof Cat) {
      // 명시적 변환: 변수앞에 (부모) 를 작성해야합니다.
      Cat cat = (Cat) animal;
      cat.punch();
    }
  }
}

// 냥냥펀치!