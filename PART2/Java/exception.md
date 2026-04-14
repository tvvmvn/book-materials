# 예외 (Exception)

예외는 프로그램이 실행 도중에 발생하는 오류(런타임 오류)입니다. 주로 프로그램이 작동 중에 사용자의 입력 등으로 인해 발생할 수 있습니다.

예외는 프로그램을 중단시키므로 반드시 처리되어야 합니다. 예외를 잡기 위해 try/catch 구문이 사용됩니다.

```
try {
  여기에 일반 코드를 작성합니다
}
catch(예외 타입 e) {
  예외가 발생한 경우 처리할 코드
}
```


# 예외 발생과 중단

우선 예외 처리를 하지 않은 코드를 봅시다. 다음의 코드에서 존재하지 않는 배열의 요소에 접근을 시도했기 때문에 예외가 발생합니다.

```java
public class Main {
  public static void main(String[ ] args) {
    int[] myNumbers = {1, 2, 3};

    System.out.println(myNumbers[10]); // error!
  }
}
```


# 예외 처리

위의 코드에 예외 처리을 추가한 모습입니다.


```java
public class Main {
  public static void main(String[ ] args) {
    try {
      int[] myNumbers = {1, 2, 3};

      System.out.println(myNumbers[10]);
    } catch (Exception e) {
      System.out.println("Something went wrong.");
    }
  }
}
```


# finally

예외 처리문에서 예외의 발생 여부와 상관없이 최종적으로 수행하고 싶은 작업이 있다면 finally를 추가합니다.

```java
public class Main {
  public static void main(String[] args) {
    try {
      int[] myNumbers = {1, 2, 3};

      System.out.println(myNumbers[10]);
    } catch (Exception e) {
      System.out.println("Something went wrong.");
    } finally {
      System.out.println("The 'try catch' is finished.");
    }
  }
}
```


# 의도적 예외

프로그램의 로직상 필요한 경우 예외를 의도적으로 발생 시킬 수 있습니다. 예외를 생성한 다음 throw를 통해 던지면 됩니다.

다음은 나이를 입력받고 성인이 아닌 경우 예외를 던지는 코드입니다.

```java
public class Main {
  static void checkAge(int age) {
    if (age < 18) {
      throw new ArithmeticException("Access denied - You must be at least 18 years old.");
    }
    else {
      System.out.println("Access granted - You are old enough!");
    }
  }

  public static void main(String[] args) {
    // Set age to 15 (which is below 18...)
    checkAge(15); 
  }
}
```


# 예외 종류

다음은 자바의 주요 예외 타입입니다.

- ArithmeticError: Occurs when a numeric calculation goes wrong

- ArrayIndexOutOfBoundsException: 배열에서 범위를 벗어난 인덱스로 요소에 접근을 시도했을 때 발생합니다.

- ClassNotFoundException: 존재하지 않는 클래스에 접근을 시도했을 때 발생합니다.

- FileNotFoundException: 존재하지 않는 파일에 접근을 시도할 때 발생합니다.

- InputMismatchException: 잘못된 값을 입력했을 때 발생합니다. (숫자 입력 요구에 문자열을 입력하는 경우 등)

- IOException: IO(입/출력) 작업이 실패했을 때 발생합니다.

- NumberFormatException:  특정 문자열을 숫자로 변환하는 과정에 실패했을 때 발생합니다.

- StringIndexOutOfBoundsException: 문자열에서 범위를 벗어난 인덱스로 특정 문자에 접근을 시도했을 때 발생합니다.

- NullPointerException: null 객체를 사용하려고 했을 때 발생합니다. 