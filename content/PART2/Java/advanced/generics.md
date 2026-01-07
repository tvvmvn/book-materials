# Generics

Generics allow you to write classes, interfaces, and methods that work with `different data types`, without having to specify the exact type in advance.

This makes your code more flexible, reusable, and type-safe.


## Generic Class Example

You can create a class that works with different data types using generics:

```java
class Box<T> {
  T value; // T is a placeholder for any data type

  void set(T value) {
    this.value = value;
  }

  T get() {
    return value;
  }
}

// Create a Box to hold a String
Box<String> stringBox = new Box<>();
stringBox.set("Hello");
System.out.println("Value: " + stringBox.get());

// Create a Box to hold an Integer
Box<Integer> intBox = new Box<>();
intBox.set(50);
System.out.println("Value: " + intBox.get());
```


## Generic Method Example

You can also create methods that work with any data type using generics:

```java
public class Main {
  // Generic method: works with any type T
  public static <T> void printArray(T[] array) {
    for (T item : array) {
      System.out.println(item);
    }
  }

  public static void main(String[] args) {
    // Array of Strings
    String[] names = {"Jenny", "Liam"};

    // Array of Integers
    Integer[] numbers = {1, 2, 3};

    // Call the generic method with both arrays
    printArray(names);
    printArray(numbers);
  }
}
```