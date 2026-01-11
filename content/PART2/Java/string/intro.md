# 문자열

문자열은 연속된 문자(문자열)를 값으로 가지는 자료형입니다. 큰 따옴표 안에 값을 작성합니다.

다음은 여러 개의 문자열 변수의 예시입니다.

```java
String greeting = "Hello World!";
String grade = "A";
String code = "k-2"
```

아래와 같이 생성자로 문자열을 생성할 수도 있지만 특별한 경우가 아니고서 굳이 이렇게 생성할 필요는 없습니다. 문법적으로 더 복잡할 뿐만 아니라 메모리 관리 측면에서도 좋지 않습니다.

```java
String greeting = new String("Hello World!");
```


문자열 내의 문자 개수를 알고싶다면 length 메서드가 있습니다.

```java
String txt = "Hello World!";

System.out.println(txt.length());
// 5
```


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


# 문자열의 유용한 메서드들

- charAt
- indexOf
- equals 


특정 위치의 문자가 궁금하다면 charAt 메서드를 사용할 수 있습니다. charAt은 인덱스를 인자로 가집니다. 

```java
String txt = "Hello";

System.out.println(txt.charAt(0));  // H
System.out.println(txt.charAt(4));  // o
```

이번엔 거꾸로 특정 문자의 값을 가지고 인덱스를 알고 싶은 경우 indexOf 메서드를 사용할 수 있습니다. 만약 문자가 여러 개인 경우에는 첫번째 문자의 인덱스를 반환합니다.


```java
String txt = "hello world";
System.out.println(txt.indexOf("e")); // 1
System.out.println(txt.indexOf("l")); // 2
```

문자열을 비교할 때 == (동등 연산자)로 비교한다면 우리가 예상한 결과와 좀 다를 수 있습니다. == 는 단순히 값의 비교 뿐만 아니라 비교되는 변수가 메모리 공간을 공유하는지 확인합니다

== 로 비교할 때, 생성자를 활용해 생성된 문자열은 완전히 새로운 객체이므로 그 어떤 다른 문자열과도 같지 않습니다. 반면 literal로 생성한 문자열 변수들은 같은 값의 리터럴 변수가 있다면 메모리를 공유하도록 합니다.


```java
String s1 = "Hello";
String s2 = "Hello";
String s3 = new String("Hello");
String s4 = new String("Hello");

System.out.println(s1 == s2); //true
System.out.println(s3 == s4); //false
System.out.println(s1 == s3); // false
```

반면 equals 메서드는 순수하게 값만 비교하므로 많은 경우에 유용할 수 있습니다.

```java
String s1 = "Hello";
String s2 = "Hello";
String s3 = new String("Hello");
String s4 = new String("Hello");

System.out.println(s1.equals(s2)); //true
System.out.println(s3.equals(s4)); //true
System.out.println(s1.equals(s3)); //true
```