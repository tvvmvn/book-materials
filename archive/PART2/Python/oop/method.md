# Class Methods

Methods are functions that belong to a class. They define the behavior of objects created from the class.

```py
class Person:
  def __init__(self, name):
    self.name = name

  def greet(self):
    print("Hello")

p1 = Person("Emil")
p1.greet()
```

Note: All methods must have self as the first parameter.


## Methods Accessing Properties

Methods can access and modify object properties using self:

```py
class Person:
  def __init__(self, name, age):
    self.name = name
    self.age = age

  def get_info(self):
    return f"{self.name} is {self.age} years old"

p1 = Person("Tobias", 28)
print(p1.get_info())
```


## Delete Methods

You can delete methods from a class using the del keyword:

```py
class Person:
  def __init__(self, name):
    self.name = name

  def greet(self):
    print("Hello!")

p1 = Person("Emil")

del Person.greet

p1.greet() # This will cause an error
```


## The __str__() Method

The __str__() method is a special method that controls what is returned when the object is printed:

```py
Without the __str__() method:

class Person:
  def __init__(self, name, age):
    self.name = name
    self.age = age

p1 = Person("Emil", 36)
print(p1)
# <__main__.Person object at 0x15039e602100>
```

With the __str__() method:

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




# As you might know..

Methods is a function. so

- Methods with Parameters
Methods can accept parameters just like regular functions: