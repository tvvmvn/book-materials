# 요소 제거하기

여러가지 방법으로 한개 또는 여러가지 요소를 제거할 수 있습니다

- remove()
- pop()
- clear()
- del 예약어


## remove()

이름으로 요소를 특정하고 제거할 수 있습니다.

```python
fruits = ["apple", "banana", "cherry"]

# 리스트에서 banana를 제거합니다
fruits.remove("banana")
```


## pop()

인덱스를 특정하여 원하는 자리에 있는 요소를 제거할 수 있습니다.
인덱스를 특정하지 않으면 가장 마지막의 요소를 제거합니다

```python
fruits = ["apple", "banana", "cherry"]

# cherry를 제거합니다
fruits.pop()
```

## clear()

리스트의 모든 요소를 제거합니다. 빈 리스트만 남게 됩니다

```python
fruits = ["apple", "banana", "cherry"]

# 빈 리스트만 남게됩니다
fruits.clear()
```

## del 예약어

인덱스를 사용하여 원하는 위치의 요소를 제거합니다

```python
fruits = ["apple", "banana", "cherry"]

# apple을 제거합니다
del fruits[0]
```
