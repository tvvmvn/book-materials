# 클래스와 객체


# 클래스 정의하기

class 예약어로 클래스를 선언할 수 있습니다.


```py
class MyClass:
  x = 5

print(MyClass)
```


# 객체 생성하기

생성자로 클래스의 객체를 생성할 수 있습니다. 생성자는 클래스의 이름과 같습니다.

```py
class MyClass:
  x = 5

p1 = MyClass()

print(p1.x)
```


여러 개의 객체 또한 생성할 수 있습니다

```py
class MyClass:
  x = 5

p1 = MyClass()
p2 = MyClass()
p3 = MyClass()
```


# 객체 삭제하기

del 예약어로 객체를 삭제합니다

```python
del p1
```


# 객체 출력하기 

__str___ 메서드는 객체를 출력할 때 객체의 내용을 볼 수 있도록 돕는 메서드입니다.
다음은 __str__ 메서드를 사용하지 않은 경우입니다. 단순히 객체를 출력하면 객체 이름과 메모리 주소 밖에 볼 수 없습니다.

```py
class Person:
  def __init__(self, name, age):
    self.name = name
    self.age = age

p1 = Person("Emil", 36)

print(p1)
# <__main__.Person object at 0x15039e602100>
```

다음은 __str__ 메서드를 적용한 경우입니다. 원하는 방식으로 메서드를 정의할 수 있습니다

```py
class Person:
  def __init__(self, name, age):
    self.name = name
    self.age = age

  def __str__(self):
    return f"{self.name} ({self.age})"

p1 = Person("Tobias", 36)

print(p1)
# Tobias (36)
```
