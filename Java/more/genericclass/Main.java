package more.genericclass;

class Person<T> {
  T id;

  Person(T id) {
    this.id = id;
  }

  T getId() {
    return this.id;
  }
}

public class Main {
  public static void main(String[] args) {
    // responsive to increase 
    Person<Long> person = new Person<>(10L);

    System.out.println(person.getId());
  }
}

// 10