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