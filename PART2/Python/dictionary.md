# Dictionary

1. 개념
1. 요소에 접근하기
1. 요소 바꾸기
1. 요소 추가하기
1. 요소 삭제하기


# 딕셔너리 개념

딕셔너리는 다양한 타입의 데이터들을 저장할 수 있는 자료형입니다.
딕셔너리의 각 데이터들은 고유한 키(key)를 통해 접근할 수 있습니다.


# 딕셔너리 생성하기

중괄호안에 각 데이터들을 키와 함께 작성하고 콤마로 구분합니다.

```python
cat = {
  "name": "Kitty",
  "age": 2,
  "home": None  
}

print(cat)
# {'name': 'Kitty', 'age': 2, 'home': None}
```


# 딕셔너리 생성자

딕셔너리 생성자로도 딕셔너리를 생성할 수 있습니다. 생성자에 딕셔너리에 포함시킬 데이터들을 소괄호로 묶어 전달하면 됩니다.

```python
cat = dict(name = "Kitty", age = 2, home = None)

print(cat)
# {'name': 'Kitty', 'age': 2, 'home': None}
```


# 길이 구하기

딕셔너리가 가진 데이터들의 개수를 길이(length)라고 표현합니다. len() 함수로 딕셔너리의 길이를 구할 수 있습니다

```python
cat = {
  "name": "Kitty",
  "age": 2,
  "home": None  
}

print(len(cat)) # 3
```


# 요소에 접근하기

키 값으로 원하는 데이터에 접근할 수 있습니다.
대괄호 안에 키값을 작성합니다.

```python
cat = {
  "name": "Kitty",
  "age": 2,
  "home": None  
}

print(cat["name"]) # Kitty
print(cat["age"]) # 2
print(cat["home"]) # None
```


# 요소 추가

새로운 데이터를 추가하기 위해서 원하는 키값과 함께 데이터를 추가하세요.
만약 키가 이미 존재한다면 새로운 값으로 덮어씁니다.

```python
cat = {
  "name": "Kitty",
  "age": 2,
}

cat["home"] = None

print(cat)
# {'name': 'Kitty', 'age': 2, 'home': None}
```


# 딕셔너리 메서드

- get
- update
- pop
- clear
- keys
- values
- items


# get

또는 get() 메서드로도 데이터에 접근할 수 있습니다.
키 값을 메서드에 전달합니다

```python
cat = {
  "name": "Kitty",  
  "age": 2,
}

print(cat.get("name")) # Kitty
```

# update()

한번에 여러 개의 데이터를 추가하고 싶을 때는 update() 메서드가 유용합니다.
만약 기존에 있던 키를 입력하면 덮어씁니다.

```python
cat = {
  "name": "Kitty",
}

cat.update({
  "age": 2,
  "home": None
})

print(cat)
# {'name': 'Kitty', 'age': 2, 'home': None}
```


# pop()

pop메서드에 삭제하고 싶은 데이터의 키를 입력하세요

```python
cat = {
  "name": "Kitty",
  "age": 2,
  "home": None
}

cat.pop("home")

print(cat)
# {'name': 'Kitty', 'age': 2}
```

# clear()

딕셔너리의 완전히 비웁니다. 필요한 경우에만 사용하세요

```python
cat = {
  "name": "kitty",
  "age": 2,
}

cat.clear()

print(cat)
# {}
```


# keys

```py
cat = {
  "name": "Kitty",
  "age": 2,
  "home": None
}

print(cat.keys())
# dict_keys(['name', 'age', 'home'])
```


# values

```py
cat = {
  "name": "Kitty",
  "age": 2,
  "home": None
}

print(cat.values())
# dict_values(['Kitty', 2, None])
```


# items

딕셔너리의 각 키-값 쌍을 (키, 값)의 튜플로 저장합니다.

```py
cat = {
  "name": "Kitty",
  "age": 2,
  "home": None
}

print(cat.items())
# dict_items([('name', 'Kitty'), ('age', 2), ('home', None)])
```