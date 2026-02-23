# Python also has a super() function that will make the child class 
# inherit all the methods and properties from its parent:


# parent
class Person:
  def __init__(self, fname, lname):
    self.firstname = fname
    self.lastname = lname

  def printname(self):
    print(self.firstname, self.lastname)

# child
class Student(Person):
  def __init__(self, fname, lname, year):
    super().__init__(fname, lname)
    # Add a property called graduationyear to the Student class:
    self.graduationyear = year

  def welcome(self):
    print("Welcome", self.firstname, self.lastname, "to the class of", self.graduationyear)


x = Student("Mike", "Olsen", 2019)
x.welcome()