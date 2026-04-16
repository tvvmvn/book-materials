# 변수

값을 담는 컨테이너입니다.


# 변수 생성하기

```java
package variables.create;

public class Main {
  public static void main(String[] args) {
    int year = 2026;

    System.out.println(year); 
  }
}

// 2026
```


# 변수의 범위

클래스 변수와 지역 변수

```java
package variables.scope;

public class Main {
  static int a = 2;

  static void f() {
    int b = 2;
  }
  public static void main(String[] args) {
    System.out.println(a);
    // System.out.println(b); // error
  }
}
```
