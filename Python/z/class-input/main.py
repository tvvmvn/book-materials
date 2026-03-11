class Person:
  pass

name = input('your name: ')
age = input('your age: ')

p = Person()
p.name = name
p.age = age

print(f"name: {name}, age: {age}")