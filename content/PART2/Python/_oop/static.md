# 클래스 속성

클래스 속성은 객체가 아닌 클래스에 속한 속성입니다. 클래스 속성은 클래스의 모든 인스턴스가 공유합니다.

```py
class Person:
  # static 멤버
  species = "Human" 

  def __init__(self, name):
    self.name = name 

p1 = Person("Emil")
p2 = Person("Tobias")

print(p1.name)
print(p1.species)
print(p2.name)
print(p2.species)
```

