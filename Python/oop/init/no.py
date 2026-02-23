# Without the __init__() method, 
# you would need to set properties manually for each object:


class Person:
  pass

p1 = Person()
p1.name = "Tobias"
p1.age = 25

print(p1.name)
print(p1.age)