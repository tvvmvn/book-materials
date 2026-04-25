def isAdult(age):
  return age >= 18

ages = [10, 18, 22, 30]

for age in filter(isAdult, ages):
  print(age)

# 18
# 22
# 30