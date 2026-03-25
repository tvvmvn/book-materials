package more.genericclass;

class Box<T> {
  // T is a placeholder for any data type
  T value; 

  Box(T value) {
    this.value = value;
  }

  void show() {
    System.out.println(value);
  }
}

public class Main {
  public static void main(String[] args) {
    // String box
    Box<String> stringBox = new Box<>("Hello");
    stringBox.show();

    // Number Box
    Box<Integer> intBox = new Box<>(100);
    intBox.show();
  }
}