package javalab;

class Printer {
  void print(Integer a) {
    System.out.print("A" + a);
  }

  void print(Object a) {
    System.out.print("B" + a);
  }

  void print(Number a) {
    System.out.print("C" + a);
  }
}

public class Main {
  public static class Collection<T> {
    T value;

    public Collection(T t) {
      value = t;
    }
    
    public void print() {
      System.out.println(value);
      System.out.println(value.getClass());
    }
  }

  public static void main(String[] args) {
    new Collection<>(0).print();
  }
}

// 0
// class java.lang.Integer