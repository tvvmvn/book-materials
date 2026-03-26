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


# 다수의 catch

다음과 같이 여러 개의 catch를 사용할 수 있습니다. 이 경우 코드 상에서 앞에 있는 catch가 더 우선됩니다. 물론 예외의 타입이 일치하는 경우에 한해서 입니다. 

Exception 타입은 모든 예외를 포함하는 추상적인 예외이므로 마지막에 추가하는 것이 좋습니다.


```java
public class Main {
  public static void main(String[] args) {
    try {
      // 이 코드는 ArithmeticException 예외를 발생시킵니다
      int result = 10 / 0;             
    } 
    catch (ArrayIndexOutOfBoundsException e) {
      System.out.println("Array index does not exist.");
    } 
    catch (ArithmeticException e) {
      System.out.println("Cannot divide by zero.");
    } 
    catch (Exception e) {
      System.out.println("Something else went wrong.");
    }
  }
}

// Cannot divide by zero
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

