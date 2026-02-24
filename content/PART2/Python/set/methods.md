# Methods

- add
- update
- remove
- discard
- pop
- clear


# add

add 메서드로 집합에 원소를 추가할 수 있습니다.

```python
a = {10, 20, 30}

a.add(40)

print(a)
# {40, 10, 20, 30}
```


# update

현재 집합을 다른 집합과 합칩니다.

```python
a = {10, 20, 30}
b = {40, 50}

a.update(b)

print(a)
# {50, 20, 40, 10, 30}
```


# remove()

remove 메서드에 전달된 원소를 제거합니다. 
전달된 원소가 집합에 없는 경우 에러를 일으킵니다

```python
a = {10, 20, 30}

a.remove(20)

print(a)
# {10, 30}
```


# discard()

discard 메서드에 전달된 원소를 제거합니다. 
전달된 원소가 집합에 없으면 무시합니다.(에러 없음)

```python
a = {10, 20, 30}

a.discard(20)

print(a)
# {10, 30}
```


# pop()

랜덤으로 한가지 원소를 제거합니다

```python
a = {10, 20, 30}

a.pop()

print(a)
# {20, 30}
```


# clear()

집합의 모든 원소를 제거합니다.

```python
a = {10, 20, 30}

a.clear()

print(a)
# set()
```