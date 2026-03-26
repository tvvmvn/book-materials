# 형 변환 (Type Casting)

다음의 생성자들은 자신의 타입으로 입력값을 변환합니다.

- int()
- float()
- str()

int()는 Int의 생성자입니다. 입력값을 정수형으로 변환합니다
float()은 Float의 생성자입니다. 입력값을 실수형으로 변환합니다
str()은 String의 생성자입니다. 입력값을 문자형으로 변환합니다

```py
print(int(1.5)) # 1
print(float(2)) # 2.0
print(int("3")) # 3
```


# 활용 사례

다음의 예제처럼 사용자 입력값을 숫자로 바꾸어야 하는 경우가 좋은 예시입니다. 사용자 입력값은 기본적으로 문자열로 저장됩니다. 

```py
x = input("first: ")
y = input("second: ")

print(int(x) + int(y))
```