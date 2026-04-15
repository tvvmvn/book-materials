cat = {
  "name": "Kitty",
  "age": 2,
  "home": None  
}

print('cat info:')
# items() 메서드는 딕셔너리의 각 필드를 튜플형으로 반환합니다.
for key, val in cat.items():
  print(f"{key}: {val}")
  
# 
# cat info: 
# name: Kitty
# age: 2
# home: None