# 중복값을 포함한 리스트
nums = [1, 2, 3, 3, 3, 4, 5, 5]

# 중복을 허용하지 않는 set을 특성을 활용합니다.
tmp = set(nums)

# set을 다시 리스트로 변환합니다
newNums = list(tmp)

print(newNums)

# 
# [1, 2, 3, 4, 5]