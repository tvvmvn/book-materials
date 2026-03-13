# OOP

- 클래스와 인스턴스
- 메서드
- static


# 클래스 / 인스턴스

```py
class Person:
  def __init__(self, name, age):
    self.name = name
    self.age = age

p = Person("John", 30)

p.greeting()
```


# Methods

클래스에 속한 함수를 메서드라고 합니다. 메서드는 다양하게 활용됩니다.

다음은 메서드를 정의하고 호출하는 방법입니다. 생성자와 마찬가지로 메서드의 첫번째 인자는 self이어야만 합니다


```py
class Person:
  def __init__(self, name):
    self.name = name

  def greeting(self):
    return f"Hello, I'm {self.name}"

p1 = Person("Tobias")

print(p1.greeting())
```


# Static

클래스는 객체 생성을 위한 설명서입니다. 
객체에 속한 변수나 함수들을 클래스의 멤버라고 부릅니다.

class 예약어로 클래스를 선언할 수 있습니다.
생성자로 클래스의 객체를 생성할 수 있습니다. 생성자는 클래스의 이름과 같습니다.

```py
class Person:
  # static
  country = "USA"
  
  def __init__(self, name, age):
    self.name = name
    self.age = age

p1 = Person("John", 30)
p2 = Person("Jane", 25)
p3 = Person("Mary", 40)

print(p1.country)
print(Person.country)
```
