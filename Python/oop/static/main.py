class Person:
  # static
  country = "USA"
  
  def __init__(self, name, age):
    self.name = name
    self.age = age

p1 = Person("John", 30)
p2 = Person("Jane", 25)
p3 = Person("Mary", 40)

print(p1.country)
print(Person.country)

