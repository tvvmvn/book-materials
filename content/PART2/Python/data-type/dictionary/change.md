# 데이터 수정하기

키 값으로 원하는 데이터를 수정할 수 있습니다

```python
thisdict = {
  "brand": "Ford",
  "model": "Mustang",
  "year": 1964
}

thisdict["year"] = 2018
```


## update()

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