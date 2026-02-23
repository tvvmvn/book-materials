# 요소 추가하기

여러가지 방법으로 요소를 추가할 수 있습니다

- insert
- append
- extend
- remove()
- pop()
- clear()
- sort
- reverse


# insert()

인덱스를 지정하여 원하는 자리에 요소를 추가할 수 있습니다. 

```python
fruits = ["apple", "banana", "cherry"]
fruits.insert(2, "mango")

print(fruits) # [apple, banana, mango, cherry]
```


# append()

리스트의 마지막에 요소를 추가합니다

```python
fruits = ["apple", "banana", "cherry"]
fruits.append("orange")

print(fruits) # [apple, banana, cherry, orange]
```


# extend()

리스트에 다른 리스트의 요소들을 포함시킵니다

```python
fruits = ["apple", "banana", "cherry"]
more = ["mango", "kiwi"]

fruits.extend(more)

print(fruits) # [apple, banana, cherry, mango, kiwi]
```


# remove()

이름으로 요소를 특정하고 제거할 수 있습니다.

```python
fruits = ["apple", "banana", "cherry"]

# 리스트에서 banana를 제거합니다
fruits.remove("banana")
```


# pop()

인덱스를 특정하여 원하는 자리에 있는 요소를 제거할 수 있습니다.
인덱스를 특정하지 않으면 가장 마지막의 요소를 제거합니다

```python
fruits = ["apple", "banana", "cherry"]

# cherry를 제거합니다
fruits.pop()
```

# clear()

리스트의 모든 요소를 제거합니다. 빈 리스트만 남게 됩니다

```python
fruits = ["apple", "banana", "cherry"]

# 빈 리스트만 남게됩니다
fruits.clear()
```


# sort()

sort() 메서드로 리스트를 정렬할 수 있습니다.

문자열 리스트는 알파벳 순으로 정렬합니다

```python
fruits = ["orange", "mango", "kiwi", "apple"]

fruits.sort()

print(fruits)
# [apple, kiwi, mango, orange]
```

숫자 리스트는 오름차순으로 정렬합니다

```python
fruits = [5, 3, 2, 4, 1]

fruits.sort()

print(fruits)
# [1, 2, 3, 4, 5]
```

거꾸로 정렬을 하고 싶은 경우 reverse = True 인수를 전달합니다

문자열 리스트는 역알파벳 순으로 정렬합니다

```python
fruits = ["orange", "mango", "kiwi", "apple"]

fruits.sort(reverse = True)

print(fruits)
# [orange, mango, kiwi, apple]
```

숫자 리스트는 내림차순으로 정렬합니다

```python
fruits = [5, 3, 2, 4, 1]

fruits.sort(reverse = True)

print(fruits)
# [5, 4, 3, 2, 1]
```


# reverse()

reverse() 메서드는 단순히 현재 리스트의 순서를 뒤집습니다.

```python
fruits = ["banana", "orange", "kiwi", "cherry"]

fruits.reverse()

print(fruits)
# [cherry, kiwi, orange, banana]
```