#  Python Inheritance


```py
class Person:
  def __init__(self, fname, lname):
    self.firstName = fname
    self.lastName = lname

class Student(Person):
  def __init__(self, fname, lname, grade):
    super().__init__(fname, lname)
    self.grade = grade

# person
p = Person("John", "Doe")
print(p.firstName)
print(p.lastName)

# student
s = Student("Mike", "Olsen", 3)
print(s.firstName)
print(s.lastName)
print(s.grade)
```