# 문자열에 변수 삽입하기

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


# 생성자

생성자는 클래스를 정의할 때 기본적으로 내장되는 일종의 함수입니다. 객체를 생성할 때 호출하는 함수가 바로 생성자입니다. 이 생성자를 개발자가 원하는 대로 정의하고 사용하는 것도 가능합니다.

다음은 생성자를 활용하는 경우입니다. 생성자를 활용하여 다양한 값을 가진 인스턴스를 생성할 수 있습니다. 생성자의 첫번째 인자는 반드시 self이어야만 합니다. self는 클래스의 각 인스턴스를 의미합니다.

```py
class Person:
  def __init__(self, name, age):
    self.name = name
    self.age = age

p1 = Person("John", 30)
```


