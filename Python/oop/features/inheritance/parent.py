# To keep the inheritance of the parent's __init__() function, 
# add a call to the parent's __init__() function:

# parent
class Person:
  def __init__(self, fname, lname):
    self.firstname = fname
    self.lastname = lname

  def printname(self):
    print(self.firstname, self.lastname)

# child
class Student(Person):
  def __init__(self, fname, lname):
    Person.__init__(self, fname, lname)