ages = [10, 18, 22, 30]

print('Adults:')
for age in filter(lambda n : n >= 18, ages):
  print(age)

# 
# 18
# 22
# 30