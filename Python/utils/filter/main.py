ages = [12, 18, 22, 25, 32]

o = filter(lambda n : n >= 18, ages)

for i in o:
  print(i)

# 
# 18
# 22
# 25
# 32