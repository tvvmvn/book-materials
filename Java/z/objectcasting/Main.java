package z.objectcasting;

// 부모
class Person {
  void greeting() {
    System.out.println("Hi");
  }
}

// 자식
class Student extends Person {
  // 자식의 독자적인 메서드
  void study() {
    System.out.println("Studying");
  }
}

public class Main {
  public static void main(String[] args) {
    // 부모 타입으로 자식 객체를 생성합니다(업캐스팅)
    Person person = new Student();
    
    // 부모는 자식의 독자적인 메서드를 호출할 수 없습니다.
    // 따라서 아래 코드는 에러를 일으킵니다.
    // person.study();

    // 다운캐스팅을 하기 전 객체가 자식의 인스턴스인지 확인합니다.
    if (person instanceof Student) {
      // 다운캐스팅된 person을 student 변수에 담습니다.
      Student student = (Student) person;
      // 이제 메서드 호출 가능!
      student.study(); 
    }
  }
}

// Studying