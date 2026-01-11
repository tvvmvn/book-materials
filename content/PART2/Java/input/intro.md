# 입력 받기

Scanner 객체를 활용해 사용자로부터 입력을 받을 수 있습니다.

```java
import codejava.util.Scanner;  

class Main {
  public static void main(String[] args) {
    Scanner myObj = new Scanner(System.in);  
    
    System.out.println("Enter username.");

    // 입력 받기
    String userName = myObj.nextLine();  

    System.out.println("Hello " + userName);  
  }
}
```

다음은 자료형 별로 입력을 받는 메서드입니다

- nextByte(): byte
- nextShort(): short
- nextInt(): int
- nextLong(): long
- nextDouble(): double
- nextFloat(): float
- nextBoolean(): boolean
- nextLine(): String