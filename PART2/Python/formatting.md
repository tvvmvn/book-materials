# 서식 만들기(Formatting)

변수를 문자열 안에 삽입할 수 있습니다. 여러가지 변수와 문자열을 조합해야 할때 유용합니다.


# C styles

C 언어처럼

```py
s = 'hello %s' % 'python'

print(s)
# hello python
```


# format()

다음은 기존에 사용되던 format() 메서드를 활용한 방법입니다.

```py
name = "John"
age = 30
height = 180.5

person = "name: {}, age: {}, height: {}"

print(person.format(name, age, height))
# name: John, age: 30, height: 180.5
```


# f-string

다음은 파이썬 3.6 이후부터 사용할 수 있는 f-string 을 활용한 방법입니다. 문법이 더 간단해졌습니다

```py
name = "John"
age = 30
height = 180.5

person = f"name: {name}, age: {age}, height: {height}"

print(person)
# name: John, age: 30, height: 180.5
```

