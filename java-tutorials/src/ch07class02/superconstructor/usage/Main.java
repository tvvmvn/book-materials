package ch07class02.superconstructor.usage;

class Person {
  String name;
  int age;

  // 부모 생성자
  Person(String name, int age) {
    this.name = name;
    this.age = age;
  }
}

class Student extends Person {
  int grade;

  // 자식 생성자
  Student(String name, int age, int grade) {
    // 물려받은 속성은 부모 생성자에게 전달합니다.
    super(name, age);
    // 본인 필드는 스스로 처리
    this.grade = grade;
  }
}

public class Main {
  public static void main(String[] args) {
    // 인스턴스 생성 및 속성 정의
    Student student = new Student("John", 20, 4);

    System.out.println(student.name);
    System.out.println(student.age);
    System.out.println(student.grade);
  }
}

// John
// 20
// 4