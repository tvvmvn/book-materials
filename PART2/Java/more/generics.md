# Generics (지네릭)

지네릭은 한마디로 타입 매개변수 입니다. 지네릭을 통해 유연하게 클래스나 메서드를 사용할 수 있습니다.

- 지네릭 클래스
- 지네릭 메서드


# Generic 클래스


```java
class Box<T> {
  // T is a placeholder for any data type
  T value;

  Box(T value) {
    this.value = value;
  } 

  void show() {
    System.out.println(this.value);
  }
}

class Main {
  public static void main(String[] args) {
    Box<String> stringBox = new Box<>("foo");
    stringBox.show();

    Box<Integer> intBox = new Box<>(20);
    intBox.show();
  }
}
```


# Generic 메서드


```java
public class Main {
  public static <T> void printArray(T[] array) {
    for (T item : array) {
      System.out.println(item);
    }
  }

  public static void main(String[] args) {
    String[] names = {"Jenny", "Liam"};
    Integer[] numbers = {1, 2, 3};

    printArray(names);
    printArray(numbers);
  }
}
```