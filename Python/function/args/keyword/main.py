# You can send arguments with the key = value syntax.
# This way, with keyword arguments, the order of the arguments does not matter.

def my_function(animal, name):
  print("I have a", animal)
  print("My", animal + "'s name is", name)

my_function(name = "Buddy", animal = "dog")