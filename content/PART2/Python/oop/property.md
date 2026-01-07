# 속성

객체가 가진 데이터들을 속성이라고 부릅니다

- 속성에 접근하기
- 속성 수정하기


다음은 객체의 속성에 접근하는 방법입니다. 객체 이름 다음에 점(.)을 찍고 접근할 속성을 표기합니다.

```py
class Car:
  def __init__(self, brand, model):
    self.brand = brand
    self.model = model

car1 = Car("Toyota", "Corolla")

print(car1.brand)
print(car1.model)
```


속성을 수정할 수도 있습니다. 원하는 값으로 재할당 하면 됩니다.

```py
class Person:
  def __init__(self, name, age):
    self.name = name
    self.age = age

p1 = Person("Tobias", 25)
print(p1.age)

p1.age = 26
print(p1.age)
```


