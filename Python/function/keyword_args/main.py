def info(name, age):
  print(f"name: {name}, age: {age}")

# 키워드 인자 name, age
info(name = "John", age = 30)
info(age = 25, name = "Jane")

# 
# name: John, age: 30
# name: Jane, age: 25