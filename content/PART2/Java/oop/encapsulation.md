# 캡슐화

데이터에 값을 할당 할때 잘못된 값을 입력하지 못하도록 합니다.


```java
class Person {
  private String name;

  void setName(String name) {
    if (name.length() < 2) {
      System.out.println("Invalid name");
    } else {
      this.name = name;
    }
  }

  String getName() {
    return this.name;
  }
}

Person person = new Person();

// person.name = 'j'; // 잘못된 형식
person.setName("John");

System.out.println(person.getName());
```