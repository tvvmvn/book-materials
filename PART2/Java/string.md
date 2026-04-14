# 문자열

문자열은 연속된 문자(문자열)를 값으로 가지는 자료형입니다. 큰 따옴표 안에 값을 작성합니다.

다음은 여러 개의 문자열 변수의 예시입니다.

```java
package string.create;

public class Main {
  public static void main(String[] args) {

    String greeting = "hello";

    System.out.println(greeting);
  }
}

// hello
```


# 문자 갯수 구하기

문자열 내의 문자 개수를 알고싶다면 length 메서드가 있습니다.

```java
String txt = "Hello World!";

System.out.println(txt.length());
// 5
```


# 문자열 연결하기

여러 문자열을 합치고 싶다면 +(더하기)을 사용하세요.

```java
String firstName = "John";
String lastName = "Doe";

System.out.println(firstName + " " + lastName);
```


참고로 자바에서는 문자와 숫자를 더하는 것도 가능합니다. 더한 결과가 문자열이 됩니다

```java
System.out.println("Hello " + 2025);

// Hello 2025
```


# 문자열의 주요 메서드들

자바에서 문자열은 객체이므로 많은 유용한 메서드들을 사용할 수 있습니다.

- charAt
- indexOf
- equals 
- 기타


# charAt

특정 위치의 문자가 궁금하다면 charAt 메서드를 사용할 수 있습니다. charAt은 인덱스를 인자로 가집니다. 

```java
String txt = "Hello";

System.out.println(txt.charAt(0));  // H
System.out.println(txt.charAt(4));  // o
```


# indexOf

이번엔 거꾸로 특정 문자의 값을 가지고 인덱스를 알고 싶은 경우 indexOf 메서드를 사용할 수 있습니다. 만약 찾고자 하는 문자가 여러 개일 때는 첫번째 문자의 인덱스를 반환합니다.


```java
String txt = "hello world";
System.out.println(txt.indexOf("e")); // 1
System.out.println(txt.indexOf("l")); // 2
```


# equals

문자열을 비교할 때 == (동등 연산자)는 메모리 주소를 비교합니다.

literal로 생성한 문자열 변수들은 같은 값의 리터럴 변수가 있다면 자바가 메모리를 공유하도록 합니다. 

반면 생성자를 활용해 생성된 문자열은 고유한 메모리 주소를 가집니다. 


```java
String s1 = "Hello";
String s2 = new String("Hello");

System.out.println(s1 == s2); //false
System.out.println(s1.equals(s2)); //true
```


# 기타

- trim()
- toUpperCase()/toLowerCase()
- ..