name = 'john'
age = 30

# C style
print('name: %s, age: %d' % (name, age)) 
# 과거 방식
print('name: {}, age: {}'.format(name, age))
# f-string (최신 방식)
print(f'name: {name}, age: {age}')

# 
# name: john, age: 30
# name: john, age: 30
# name: john, age: 30