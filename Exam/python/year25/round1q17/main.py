class Node:
  def __init__(self, v):
    self.v = v
    self.c = []

def tree(li):
  n = [Node(i) for i in li]

  for i in range(1, len(li)):
    n[(i - 1) // 2].c.append(n[i])
    
  return n[0]

def calc(n, level = 0):
  return n.v if level % 2 else 0 + \
    sum(calc(n, level + 1) for n in n.c) if n else 0

li = [3, 5, 8, 12, 15, 17, 21]
root = tree(li)
print(calc(root))

# 13