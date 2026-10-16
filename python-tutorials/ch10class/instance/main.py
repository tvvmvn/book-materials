# Person 클래스
class Person:
  def __init__(self, name, age):
    self.name = name
    self.age = age

# 인스턴스
person = Person("John", 30)

# 멤버에 접근
print(person.name)
print(person.age)

# John
# 30