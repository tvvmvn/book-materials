# 요소에 접근하기

키 값으로 원하는 데이터에 접근할 수 있습니다.
대괄호 안에 키값을 작성합니다.

```python
thisdict = {
  "brand": "Ford",
  "model": "Mustang",
  "year": 1964
}

x = thisdict["model"]
# Mustang
```


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