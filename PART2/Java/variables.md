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


# 형 변환 (Type Conversion)

형 변환이 일어나는 방향에 따라 다음의 두가지 유형이 존재합니다.

프로모션: 자신보다 더 큰 사이즈를 가진 자료형으로 변환하는 과정입니다.
정보가 유실될 문제가 없으므로 자동으로 형 변환이 일어납니다. 

캐스팅: 자신보다 더 작은 사이즈를 가진 자료형으로 변환하는 과정입니다.
데이터의 일부가 유실될 수 있으므로 변환할 값 앞에 괄호를 적어 명시적으로 변환합니다.


```java
int n = 9;
double d = n; 
double d = 9.78d;
int n = (int) d; 

System.out.println(n);//9
System.out.println(d); //9.0
```

