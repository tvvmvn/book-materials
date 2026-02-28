persons = [("John", 30), ("Jane", 25), ("Mary", 40)]

persons.sort(key = lambda x: x[1])

print(persons)
# [('Jane', 25), ('John', 30), ('Mary', 40)]