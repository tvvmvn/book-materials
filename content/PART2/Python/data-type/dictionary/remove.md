# 요소 삭제하기

요소를 삭제하는 몇가지 방법이 있습니다

- pop
- clear
- del


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

# del keyword

del 예약어로도 요소를 삭제할 수 있습니다

```python
thisdict = {
  "brand": "Ford",
  "model": "Mustang",
  "year": 1964
}

del thisdict["model"]

print(thisdict)
```