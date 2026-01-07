# 리스트 정렬하기

- sort()
- reverse()


## sort()

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

## reverse()

reverse() 메서드는 단순히 현재 리스트의 순서를 뒤집습니다.

```python
fruits = ["banana", "orange", "kiwi", "cherry"]

fruits.reverse()

print(fruits)
# [cherry, kiwi, orange, banana]
```