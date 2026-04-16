# 변수 (Variable)

변수는 값을 저장하는 컨테이너입니다.

```py
s = "hello"

print(s)
# hello
```

다음은 파이썬에서 변수 이름을 지을 때 주의할 점입니다.

- 변수명은 문자와 숫자, _(underscore)만 가능합니다. (공백, 특수문자 사용불가)
- 숫자로 시작할 수 없습니다.
- 대소문자를 구분합니다.
- 예약어(for,  if 등)는 사용할 수 없습니다.


# 변수 수정

변수는 값을 제한없이 재할당 할 수 있습니다.

```py
n = 1

n = 2

print(n)
# 2
```


# 타입

type() 함수를 사용합니다.

```py
x = 5

print(x)
print(type(x))

# 
# 5
# <class 'int'>
```


# 변수 범위

```py
# global
a = 1

def myfunc():
  # local
  b = 2

print(a)
print(b) #error

# 
# NameError: name 'b' is not defined
```