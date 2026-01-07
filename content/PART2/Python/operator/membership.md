# 멤버 연산자

시퀀스 타입에서 특정 값의 포함 여부를 검사합니다. 불리언 값을 반환합니다

- in
- not in

in은 검사 대상이 시퀀스에 포함됬는지 검사합니다. 

```python
fruits = ["apple", "banana", "cherry"]

print("banana" in fruits) # True
print("mango" in fruits) # False
```


not in은 검사 대상이 시퀀스에 포함되지 않았는지 검사합니다

```python
fruits = ["apple", "banana", "cherry"]

print("apple" not in fruits) # False
print("mango" not in fruits) # True
```

다음은 문자열에서 사용하는 예제입니다

```python
text = "hello world"

print("h" in text) # True
print("hello" in text) # True
print("j" not in text) # True
```