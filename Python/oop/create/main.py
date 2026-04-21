# 클래스 Person
class Person:
  # 생성자
  def __init__(self, name, age):
    self.name = name
    self.age = age

# Person의 인스턴스
p1 = Person("John", 30)
p2 = Person("Jane", 25)

print(p1)
print(p2)

# 
# <__main__.Person object at 0x105750e50>
# <__main__.Person object at 0x1057510d0>