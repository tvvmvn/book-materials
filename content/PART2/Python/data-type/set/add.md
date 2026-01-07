# 원소 추가하기

- add
- update


add 메서드로 집합에 원소를 추가할 수 있습니다.

```python
fruits = {"apple", "banana", "cherry"}

fruits.add("orange") 

print(fruits)
# {'banana', 'orange', 'cherry', 'apple'}
```

update 메서드로 현재 집합에 다른 집합의 원소들을 합칠 수 있습니다. 

```python
fruits = {"apple", "banana", "cherry"}
more = {"pineapple", "mango"}

fruits.update(more)

print(fruits)
# {apple, mango, pineapple, cherry, banana}
```
