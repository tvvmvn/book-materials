# Python Encapsulation


```py
class Person:
  def __init__(self, name, age):
    self.name = name
    self.__age = age

  def getAge(self):
    return self.__age

  def setAge(self, age):
    if age > 0:
      self.__age = age
    else:
      print("Age must be positive")

p1 = Person("Tobias", 25)
print(p1.getAge())

p1.setAge(26)
print(p1.getAge())
```