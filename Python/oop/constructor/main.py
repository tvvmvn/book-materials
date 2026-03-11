class Person:
  def __init__(self, name, age):
    self.name = name
    self.age = age
  
  def greeting(self):
    print("hello")

p = Person("John", 30)

p.greeting()
