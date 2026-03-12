# Class Methods

클래스에 속한 함수를 메서드라고 합니다. 메서드는 다양하게 활용됩니다.

다음은 메서드를 정의하고 호출하는 방법입니다. 생성자와 마찬가지로 메서드의 첫번째 인자는 self이어야만 합니다

```py
class Person:
  def __init__(self, name):
    self.name = name

  def greet(self):
    print("Hello")

p1 = Person("Emil")
p1.greet()
```


메서드는 인스턴스의 속성을 활용하여 원하는 일을 할 수도 있습니다. 아래처럼 인사할 때 자신의 이름을 소개할 수도 있습니다.

```py
class Person:
  def __init__(self, name):
    self.name = name

  def greeting(self):
    return f"Hello, I'm {self.name}"

p1 = Person("Tobias")
print(p1.greeting())
```