a = [10, 20, 30, 40]

# filter object
o = filter(lambda n : n > 10, a)

print(list(o))
# [20, 30, 40]