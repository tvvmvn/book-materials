#  Python Inheritance

Inheritance allows us to define a class that inherits all the methods and properties from another class.

`Parent class` is the class being inherited from, also called base class.

`Child class` is the class that inherits from another class, also called derived class.


```py
class Person:
  def __init__(self, fname, lname):
    self.firstname = fname
    self.lastname = lname

  def printname(self):
    print(self.firstname, self.lastname)

class Student(Person):
  pass

x = Student("Mike", "Olsen")
x.printname()
# Mike Olsen
```


## Inherits members : properties and methods

..



## Add the __init__() Function to the child class

```py
class Student(Person):
  def __init__(self, fname, lname):
    #add properties etc.
```


## Call to the parent's __init__() function:

```py
class Person:
  def __init__(self, fname, lname):
    self.firstname = fname
    self.lastname = lname

  def printname(self):
    print(self.firstname, self.lastname)

class Student(Person):
  def __init__(self, fname, lname, year):
    Person.__init__(self, fname, lname)
    self.graduationyear = year

x = Student("Mike", "Olsen", 2019)
```

By using the super() function, you do not have to use the name of the parent element, it will automatically inherit the methods and properties from its parent.

```py
class Person:
  def __init__(self, fname, lname):
    self.firstname = fname
    self.lastname = lname

  def printname(self):
    print(self.firstname, self.lastname)

class Student(Person):
  def __init__(self, fname, lname, year):
    super().__init__(fname, lname)
    self.graduationyear = year

x = Student("Mike", "Olsen", 2019)
# Mike Olsen
```