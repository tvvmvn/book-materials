class User:
  # 정적 멤버
  userCount = 0 
  
  def __init__(self, name):
    self.name = name
    User.userCount += 1

p1 = User("John")
p2 = User("Jane")
p3 = User("Mary")

print(User.userCount)

# 
# 3