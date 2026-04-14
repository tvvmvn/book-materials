# enum

열거형 (enumorous)
상수 그룹입니다.


```java
package more.enumorous;

enum ArrowKeys {
  UP,
  LEFT,
  RIGHT,
  DOWN,
}

public class Main {
  public static void main(String[] args) {

    ArrowKeys clicked = ArrowKeys.RIGHT;

    if (clicked == ArrowKeys.RIGHT) {
      System.out.println("go to right");
    }
  }
}

// WELL
// RARE
```