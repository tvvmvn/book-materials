ages = [10, 18, 22, 30]

adults = filter(lambda age : age >= 18, ages)

# 리스트로 변환
print(list(adults))

# 
# [18, 22, 30]