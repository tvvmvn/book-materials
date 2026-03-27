class Person:
  def __init__(self, name, age):
    self.name = name
    self.age = age

name = input('your name: ')
age = input('your age: ')

person = Person(name, age)

print(person.name)
print(person.age)

# 
# your name: john
# your age: 30
# john
# 30