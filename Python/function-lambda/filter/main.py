numbers = [1, 2, 3, 4, 5, 6, 7, 8]

# filter object
odd_numbers = filter(lambda x: x % 2 != 0, numbers)

print(list(odd_numbers))
#[1, 3, 5, 7]