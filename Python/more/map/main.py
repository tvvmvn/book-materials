def bigger(n):
  return n * 10

nums = [10, 20, 30]

for num in map(bigger, nums):
  print(num)

# 100
# 200
# 300