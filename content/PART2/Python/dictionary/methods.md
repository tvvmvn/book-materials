# get

또는 get() 메서드로도 데이터에 접근할 수 있습니다.
키 값을 메서드에 전달합니다

```python
# Get the value of the "model" key:
thisdict = {
  "brand": "Ford",
  "model": "Mustang",
  "year": 1964
}

x = thisdict.get("model")
# Mustang
```

# update()

한번에 여러개의 데이터를 바꾸고 싶을 때는 update() 메서드가 유용합니다

```python
thisdict = {
  "brand": "Ford",
  "model": "Mustang",
  "year": 1964
}

# model, year를 새 값으로 바꿉니다
thisdict.update({
  "model": "Aspire",
  "year": 2020
})
```

update() 메서드는 요소를 수정하는 것 뿐만 아니라 추가도 가능합니다.
기존에 없던 키라면 데이터가 추가됩니다.

```python
thisdict = {
  "brand": "Ford",
  "model": "Mustang",
  "year": 1964
}

# color 추가
thisdict.update({"color": "red"})
```


# pop()

pop메서드에 삭제하고 싶은 데이터의 키를 입력하세요

```python
thisdict = {
  "brand": "Ford",
  "model": "Mustang",
  "year": 1964
}

# model 삭제
thisdict.pop("model")

print(thisdict)
```

# clear()

clear() 메서드는 딕셔너리의 모든 데이터를 삭제합니다. 필요한 경우에만 사용하세요

```python
thisdict = {
  "brand": "Ford",
  "model": "Mustang",
  "year": 1964
}

thisdict.clear()

print(thisdict)
```
