# Methods

- add
-
-
- remove()
- discard()
- pop()
- clear()


# add

add 메서드로 집합에 원소를 추가할 수 있습니다.

```python
fruits = {"apple", "banana", "cherry"}

fruits.add("orange") 

print(fruits)
# {'banana', 'orange', 'cherry', 'apple'}
```

# update

update 메서드로 현재 집합에 다른 집합의 원소들을 합칠 수 있습니다. 

```python
fruits = {"apple", "banana", "cherry"}
more = {"pineapple", "mango"}

fruits.update(more)

print(fruits)
# {apple, mango, pineapple, cherry, banana}
```


# remove()

remove 메서드에 전달된 원소를 제거합니다. 전달된 원소가 집합에 없는 경우 에러를 일으킵니다

```python
fruits = {"apple", "banana", "cherry"}

fruits.remove("banana")

print(fruits)
# {apple, cherry}
```


# discard()

discard 메서드에 전달된 원소를 제거합니다. 전달된 원소가 집합에 없어도 오류를 발생시키지 않습니다.

```python
fruits = {"apple", "banana", "cherry"}

fruits.discard("banana")

print(fruits)
# {apple, cherry}
```


# pop()

랜덤으로 한가지 원소를 제거합니다

```python
fruits = {"apple", "banana", "cherry"}

fruits.pop()

print(len(fruits))
# 2
```


# clear()

집합의 모든 원소를 제거합니다

```python
fruits = {"apple", "banana", "cherry"}

fruits.clear()

print(fruits)
# {}
```