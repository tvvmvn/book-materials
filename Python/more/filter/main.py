def isAdult(age):
  return age >= 18

ages = [10, 18, 22, 30]

adults = filter(isAdult, ages)

# 리스트로 변환
print(list(adults))

# 
# [18, 22, 30]