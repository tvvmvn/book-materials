class Person:
  def __init__(self, name, age):
    self.name = name
    self.age = age

# 객체를 생성함과 동시에 리스트에 할당하고 있습니다.
persons = [
  Person('John', 30), 
  Person('Jane', 25),
  Person('Mary', 40)
]

print('Persons:')
for person in persons:
  print(f'name: {person.name}, age: {person.age}')

# 
# Persons:
# name: John, age: 30
# name: Jane, age: 25
# name: Mary, age: 40