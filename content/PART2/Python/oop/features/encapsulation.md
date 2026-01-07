# Python Encapsulation

Encapsulation is about protecting data inside a class.

It means keeping data (properties) and methods together in a class, while controlling how the data can be accessed from outside the class.

This prevents accidental changes to your data and hides the internal details of how your class works.


## Private Properties

In Python, you can make properties private by using a double underscore __ prefix:

```py
class Person:
  def __init__(self, name, age):
    self.name = name
    self.__age = age  # Private property

p1 = Person("Emil", 25)
print(p1.name)
print(p1.__age)  # This will cause an error
```


## Private Methods

You can also make methods private using the double underscore prefix:

```py
class Calculator:
  def __init__(self):
    self.result = 0

  def __validate(self, num):
    if not isinstance(num, (int, float)):
      return False
    return True

  def add(self, num):
    if self.__validate(num):
      self.result += num
    else:
      print("Invalid number")

calc = Calculator()
calc.add(10)
calc.add(5)
print(calc.result)
# calc.__validate(5) # This would cause an error
```


## getter and setter

To access a private property, you can create a getter method:
To modify a private property, you can create a setter method.

```py
class Person:
  def __init__(self, name, age):
    self.name = name
    self.__age = age

  def get_age(self):
    return self.__age

  def set_age(self, age):
    if age > 0:
      self.__age = age
    else:
      print("Age must be positive")

p1 = Person("Tobias", 25)
print(p1.get_age())

p1.set_age(26)
print(p1.get_age())

```