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
thisdict = {
  "brand": "Ford",
  "model": "Mustang",
  "year": 1964
}

print(thisdict)
```


# 딕셔너리 생성자

딕셔너리 생성자로도 딕셔너리를 생성할 수 있습니다. 생성자에 딕셔너리에 포함시킬 데이터들을 소괄호로 묶어 전달하면 됩니다.

```python
thisdict = dict(
  name = "John", 
  age = 36, 
  country = "Norway"
)
```


# 길이 구하기

딕셔너리가 가진 데이터들의 개수를 길이(length)라고 표현합니다. len() 함수로 딕셔너리의 길이를 구할 수 있습니다

```python
thisdict = {
  "brand": "Ford",
  "model": "Mustang",
  "year": 1964
}

print(len(thisdict))
# 3
```


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

