data = [
  [3, 5, 2, 4, 1],
  [4, 5, 1],
  [4, 4, 1, 5, 4],
  [4, 5]
]

result = {}

for index, lis in enumerate(data):
  list_sum = sum(lis)
  list_len = len(lis)
  result[index] = (list_sum, list_len)

print(result)
# {0: (15, 5), 1: (10, 3), 2: (18, 5), 3: (9, 2)}