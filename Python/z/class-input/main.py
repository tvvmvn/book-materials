class Person:
  def __init__(self, name, age):
    self.name = name
    self.age = age

name = input('your name: ')
age = input('your age: ')

p = Person(name, age)

print(f"name: {name}, age: {age}")