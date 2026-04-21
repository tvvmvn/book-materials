def bigger(n):
  return n * 10

nums = [10, 20, 30]

bigNums = map(bigger, nums)

print(list(bigNums))

# 
# [100, 200, 300]