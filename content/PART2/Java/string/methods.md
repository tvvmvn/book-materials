# 문자열의 유용한 메서드들

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