class Person:
  def __init__(self, name, age):
    self.name = name
    self.age = age

person = Person("John", 30)

person.age += 1

print(person.age)

# 
# 31