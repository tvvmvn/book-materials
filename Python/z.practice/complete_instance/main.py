class Person:
  def __init__(self, name, age):
    self.name = name
    self.age = age

# 이름을 입력받습니다
name = input('your name: ')
# 나이를 입력받습니다
age = input('your age: ')

# 입력값을 바탕으로 객체를 생성합니다
person = Person(name, age)

print(person.name)
print(person.age)

# 
# your name: john
# your age: 30
# john
# 30