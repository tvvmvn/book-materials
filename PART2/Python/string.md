# 문자열

1. 개념
1.
1.
1.


# 문자열

문자열은 연속된 문자를 값으로 가지는 자료형입니다. 따옴표안에 값을 적습니다. 파이썬에서는 작은 따옴표와 큰 따옴표를 가리지 않습니다.

```python
s = "hello world"
```


# 인덱싱 (Indexing)

문자열은 일종의 배열입니다. 따라서 배열을 다루는 것과 비슷한 부분이 많습니다.
특정 문자에 접근하기 위해 인덱스를 사용하는 것도 마찬가지입니다. 문자열의 각 문자는 고유의 인덱스를 가지고 있습니다. 인덱스는 0부터 시작하며 뒤로 갈수록 1씩 증가합니다.

```python
s = 'hello'

print(s[0]) # h
print(s[1]) # e
print(s[2]) # l
```


# 문자의 개수

문자열에서 문자의 개수를 길이(length)라고 표현합니다. 길이를 구하기 위해 len() 함수를 사용합니다.

```python
s = 'hello'

print(len(s))
# 5
```


# 여러줄의 문자

3개의 따옴표를 사용하면 줄바꿈이 있는 텍스트를 변수에 할당할 수 있습니다

```python
s = """
1. eat 
2. sleep
3. repeat
"""
```

# 문자열 연결하기

+ 연산자로 여러 문자열을 연결할 수 있습니다.

```python
a = "hello"
b = " world"

c = a + b

print(c)
# hello world
```


# Methods

- lower, upper
- replace
- split
- strip


# lower, upper

```py
s = "Hello World"
print(s.lower())# hello world
print(s.upper())# HELLO WORLD
```

# replace

```py
s = "Hello World"
print(s.replace("World", "Python")) # Hello Python
```


# split


```py
s = "Hello World"
print(s.split()) #['Hello', 'World']
```


# strip

```py
s = " Hello World "
print(s.strip()) # "Hello World"
```