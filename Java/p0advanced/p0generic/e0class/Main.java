package p0advanced.p0generic.e0class;

class Person<T> {
  T Id;
}

public class Main {
  public static void main(String[] args) {
    Person<Integer> personWithIntId = new Person<Integer>();
    personWithIntId.Id = 1;

    Person<String> personWithStringId = new Person<String>();
    personWithStringId.Id = "random-string-1";
  }
}
