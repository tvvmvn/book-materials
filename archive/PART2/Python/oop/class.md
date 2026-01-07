# Class and instance

Python is an object oriented programming language.

Almost everything in Python is an object, with its properties and methods.

A Class is like an object constructor, or a "blueprint" for creating objects.


## Create a Class

To create a class, use the keyword class:

```py
class MyClass:
  x = 5

print(MyClass)
```

## Create Object

Now we can use the class named MyClass to create objects:

```py
# Create an object named p1, and print the value of x:
class MyClass:
  x = 5

p1 = MyClass()
```

Multiple Objects
You can create multiple objects from the same class:

```py
# Create three objects from the MyClass class:

p1 = MyClass()
p2 = MyClass()
p3 = MyClass()
```

## Delete Objects

You can delete objects by using the del keyword:

```
del p1
```

## The pass Statement

class definitions cannot be empty, but if you for some reason have a class definition with no content, put in the pass statement to avoid getting an error.

```py
class Person:
  pass
```