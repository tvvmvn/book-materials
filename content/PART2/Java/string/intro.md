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

