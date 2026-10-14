package ch07class02.childinstance.create;

// 부모 클래스
class Person {
  String name;
  int age;
}

// 자식 클래스
class Student extends Person {
  // name, age를 상속받음
  int grade;
}

public class Main {
  public static void main(String[] args) {
    // 자식 인스턴스 생성
    Student student = new Student();
    
    // 멤버 할당
    student.name = "John";
    student.age = 20;
    student.grade = 3;

    System.out.println(student.name);
    System.out.println(student.age);
    System.out.println(student.grade);
  }
}

// John
// 20
// 3