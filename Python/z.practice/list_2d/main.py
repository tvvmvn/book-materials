# 2차원 리스트
phone = [
  [1, 2, 3],
  [4, 5, 6],
  [7, 8, 9]
]

# 행을 순회합니다
for row in phone:
  # 각 행의 값에 접근합니다
  for val in row:
    print(val, end = ' ')
  # 한 행의 순회가 끝나면 줄바꿈
  print()

# 
# 1 2 3 
# 4 5 6 
# 7 8 9 