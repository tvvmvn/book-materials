# 요소 추가하기

새로운 데이터를 추가하기 위해서 원하는 키값과 함께 데이터를 추가하세요

```python
thisdict = {
  "brand": "Ford",
  "model": "Mustang",
  "year": 1964
}

# color 추가
thisdict["color"] = "red"

print(thisdict)
```


## update()

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