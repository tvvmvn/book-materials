# 출력

```java
package output.basic;

public class Main {
  public static void main(String[] args) {
    System.out.print("hello");
  }
}

// hello%
```


# 새 줄에서 출력하기

```java
package output.newline;

public class Main {
  public static void main(String[] args) {
    System.out.println("first line");
    System.out.println("second line");
  }
}

// first line
// second line
```


# 서식 만들기 (Formatting)

```java
package output.formatting;

public class Main {
  public static void main(String[] args) {
    System.out.printf("year: %s", 2026);
  }
}

// Happy 2026%
```