# 요소 추가하기

여러가지 방법으로 요소를 추가할 수 있습니다

- insert
- append
- extend

## insert()

인덱스를 지정하여 원하는 자리에 요소를 추가할 수 있습니다. 

```python
fruits = ["apple", "banana", "cherry"]
fruits.insert(2, "mango")

print(fruits) # [apple, banana, mango, cherry]
```


## append()

리스트의 마지막에 요소를 추가합니다

```python
fruits = ["apple", "banana", "cherry"]
fruits.append("orange")

print(fruits) # [apple, banana, cherry, orange]
```


## extend()

리스트에 다른 리스트의 요소들을 포함시킵니다

```python
fruits = ["apple", "banana", "cherry"]
more = ["mango", "kiwi"]

fruits.extend(more)

print(fruits) # [apple, banana, cherry, mango, kiwi]
```