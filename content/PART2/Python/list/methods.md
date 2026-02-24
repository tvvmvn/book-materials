# 리스트 메서드

- append
- insert
- extend
- remove
- pop
- clear
- sort
- reverse


# append()

리스트의 마지막에 요소를 추가합니다

```python
mylist = [10, 20, 30]

mylist.append(40)

print(mylist)
# [10, 20, 30, 40]
```


# insert()

인덱스를 활용해서 원하는 자리에 요소를 추가할 수 있습니다. 

```python
mylist = [10, 20, 30]

mylist.insert(3, 40)

print(mylist)
# [10, 20, 30, 40]
```


# extend()

리스트를 합칩니다.

```python
a = [10, 20, 30]
b = [40, 50]

a.extend(b)

print(a)
# [10, 20, 30, 40, 50]
```


# remove()

값으로 요소를 특정하고 제거할 수 있습니다.

```python
mylist = [10, 20, 30, 40]

mylist.remove(30)

print(mylist)
# [10, 20, 40]
```


# pop()

인덱스를 활용하여 원하는 자리에 있는 요소를 제거할 수 있습니다.
인덱스를 지정하지 않으면 가장 마지막의 요소를 제거합니다.

```python
mylist = [10, 20, 30]

mylist.pop()

print(mylist)
# [10, 20]
```

# clear()

리스트의 모든 요소를 제거합니다. 빈 리스트만 남게 됩니다

```python
mylist = [10, 20, 30]

mylist.clear()

print(mylist)
# []
```


# sort()

sort() 메서드로 리스트를 정렬할 수 있습니다.

숫자 리스트는 오름차순으로 정렬합니다.
문자열 리스트는 알파벳 순으로 정렬합니다.
만약 거꾸로 정렬을 하고 싶은 경우 sort에 reverse = True 인자를 전달하면 됩니다.

```python
mylist = [10, 30, 20]

mylist.sort()

print(mylist)
# [10, 20, 30]
```


# reverse()

현재 리스트의 순서를 뒤집습니다.

```python
mylist = [10, 30, 20]

mylist.reverse()

print(mylist)
# [20, 30, 10]
```