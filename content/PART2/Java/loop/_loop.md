# 반복문

C 언어의 연산자 부분을 참고하세요. 여기서는 Java에 추가된 부분만 다룹니다


# for-each 문

for each문은 쉽게 말해 배열 순회용 반복문입니다. 일반 반복문보다 더 직관적이고 간편한 문법을 가지고 있습니다.

```
for (자료형 원소 : 배열) {
  반복할 작업
}
```

아래처럼 원소의 이름을 배열과 관련지어 만들 수도 있습니다. 이 경우 읽기 좋은 코드가 됩니다. 

```java
String[] cars = {"Volvo", "BMW", "Ford", "Mazda"};

for (String car : cars) {
  System.out.println(car);
}
```