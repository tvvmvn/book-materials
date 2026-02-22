# 복합 객체

여러 객체가 혼합된 형태입니다. 집합, 포함관계 등을 나타낼 수 있습니다.


```java
class Address {
  int zipCode;
}

class Person {
  String name;
  Address address;
}

public class Main {
  public static void main(String[] args) {
    Address address = new Address();
    address.zipCode = 100;

    Person person = new Person();
    person.name = "John Doe";
    person.address = address;

    System.out.println(person.address.zipCode);
  }
}
```