# 원소 제거하기

다음의 방법들이 집합에서 원소를 제거하기 위해 사용됩니다

- remove()
- discard()
- pop()
- clear()


## remove()

remove 메서드에 전달된 원소를 제거합니다. 전달된 원소가 집합에 없는 경우 에러를 일으킵니다

```python
fruits = {"apple", "banana", "cherry"}

fruits.remove("banana")

print(fruits)
# {apple, cherry}
```


## discard()

discard 메서드에 전달된 원소를 제거합니다. 전달된 원소가 집합에 없어도 오류를 발생시키지 않습니다.

```python
fruits = {"apple", "banana", "cherry"}

fruits.discard("banana")

print(fruits)
# {apple, cherry}
```


## pop()

랜덤으로 한가지 원소를 제거합니다

```python
fruits = {"apple", "banana", "cherry"}

fruits.pop()

print(len(fruits))
# 2
```


## clear()

집합의 모든 원소를 제거합니다

```python
fruits = {"apple", "banana", "cherry"}

fruits.clear()

print(fruits)
# {}
```