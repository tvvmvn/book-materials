# You can add new properties to existing objects:


class Person:
  def __init__(self, name):
    self.name = name

p1 = Person("Tobias")

# add age, city
p1.age = 25
p1.city = "Oslo"

print(p1.name)
print(p1.age)
print(p1.city)