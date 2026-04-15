class User:
  count = 0 # static property
  
  def __init__(self, name):
    self.name = name
    User.count += 1

p1 = User("John")
p2 = User("Jane")
p3 = User("Mary")

print(User.count)

# 
# 3