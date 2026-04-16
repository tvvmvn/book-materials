# 입력 받기

Scanner 객체를 활용해 사용자로부터 입력을 받을 수 있습니다.
다음은 자료형 별로 입력을 받는 메서드입니다

- nextByte(): byte
- nextShort(): short
- nextInt(): int
- nextLong(): long
- nextDouble(): double
- nextFloat(): float
- nextBoolean(): boolean
- nextLine(): String


```java
package userinput;

// import
import java.util.Scanner;

public class Main {
  public static void main(String[] args) {
    // info
    String name;

    // create a scanner
    Scanner scanner = new Scanner(System.in);

    // gathering
    System.out.print("your name: ");
    name = scanner.nextLine();

    // print info
    System.out.printf("name: %s", name);

    // close scanner
    scanner.close();
  }
}

// your name: j
// name: j
```

