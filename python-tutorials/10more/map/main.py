def mega(n):
  return n * 10

nums = [10, 20, 30]

m = map(mega, nums)

# 리스트로 변환
print(list(m))

# 
# [100, 200, 300]