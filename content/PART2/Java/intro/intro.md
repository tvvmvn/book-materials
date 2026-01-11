# Java

자바는 1995년에 의해 개발된 프로그래밍 언어입니다
가장 대중적인 언어 중 하나입니다. 
데스크톱 앱, 모바일 앱, 게임, 서버 등 많은 곳에서 사용됩니다


# 문법

자바의 모든 코드는 클래스 내에서 작성되어야 합니다.
main 메서드는 프로그램마다 한개씩 존재하며 프로그램이 시작되는 진입점입니다.

```java
public class Main {
  public static void main(String[] args) {
    System.out.println("Hello World");
  }
}
```


# 출력

System.out.print: 현재 줄에 데이터를 출력합니다.
System.out.prinln: 새로운 줄에 데이터를 출력합니다

```java
System.out.print("Hello");
System.out.print("World");

// HelloWorld
```

```java
System.out.println("Hello");
System.out.println("World");

// Hello
// World
```