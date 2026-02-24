# 사용자 입력

input 함수는 사용자의 입력을 처리하고 입력값을 반환합니다

```py
name = input("your name: ")

print(f"Hello {name}")
# Hello OOO
```


# 숫자 입력받기

사용자의 입력은 문자열로 저장됩니다. 따라서 숫자 입력값이 필요한 경우 원본 입력값을 형변환해서 사용합니다.

```py
x = input("first: ")
y = input("second: ")

print(int(x) + int(y))
```