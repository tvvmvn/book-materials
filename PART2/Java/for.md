# for 문

C 언어의 for문을 참고하세요. 
여기서는 Java에 추가된 부분만 다룹니다.

```
for (표현식1; 표현식2; 표현식3) {
  반복할 코드
}

표현식1: 반복 변수 초기화
표현식2: 반복 조건
표현식3: 변수 증가/감소 표현식
```


# 사용하기

변수 i의 초기값은 1이고 i를 1씩 증가시킵니다
i가 5보다 작거나 같을 때까지 코드를 반복합니다.

```java
package forloop.basic;

public class Main {
  public static void main(String[] args) {
    for (int i = 1; i <= 5; i++) {
      System.out.println("hello");
    }
  }
}

// hello
// hello
// hello
// hello
// hello
```


# 반복 변수


# break


# continue

