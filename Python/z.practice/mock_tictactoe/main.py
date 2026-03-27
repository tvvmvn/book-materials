board = [
  [1, 0, 0],
  [0, 1, 0],
  [0, 0, 1],
]

for row in board:
  for col in row:
    if col == 1:
      print('O', end = ' ')
    else:
      print('X', end = ' ')
  print()

# 
# O X X 
# X O X 
# X X O 