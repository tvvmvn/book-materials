def divide(a, b):
  if b == 0:
    print("Error: 0으로 나눌 수 없습니다.")
    return
  print(f'{a} / {b} = {a // b}...{a % b}')

divide(10, 2)
divide(9, 2)

divide(-9, 2)

print(divmod(-9, 2))

# 
# 10 / 2 = 5...0
# 9 / 2 = 4...1
# -9 / 2 = -5...1
# (-5, 1)