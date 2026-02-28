nums = [1, 2, 3, 4]

# filter object
o = filter(lambda x: x % 2 == 0, nums)

print(list(o))#[2, 4]