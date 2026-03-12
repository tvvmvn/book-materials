# 생성자 __init__

생성자는 클래스를 정의할 때 기본적으로 내장되는 일종의 함수입니다. 객체를 생성할 때 호출하는 함수가 바로 생성자입니다. 이 생성자를 개발자가 원하는 대로 정의하고 사용하는 것도 가능합니다.

- 기본 생성자
- 생성자 활용하기


다음은 기본값 생성자를 활용하는 경우입니다. 모든 인스턴스가 동일한 값을 가지게 됩니다

```py
class Person:
  name = "John"
  age = 30

p1 = Person()
p2 = Person()
p3 = Person()
```

다음은 생성자를 활용하는 경우입니다. 생성자를 활용하여 다양한 값을 가진 인스턴스를 생성할 수 있습니다. 생성자의 첫번째 인자는 반드시 self이어야만 합니다. self는 클래스의 각 인스턴스를 의미합니다.

```py
class Person:
  def __init__(self, name, age):
    self.name = name
    self.age = age

p1 = Person("John", 30)
p2 = Person("Jane", 25)
p3 = Person("Mary", 40)
```


