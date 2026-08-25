cat = {
  "name": "Kitty",
  "age": 2,
  "home": None  
}

print('cat info:')
# dict_items의 각 요소는 키-값으로 구성된 튜플입니다.
for key, val in cat.items():
  print(f"{key}: {val}")
  
# 
# cat info: 
# name: Kitty
# age: 2
# home: None