# 리스트 (List)

리스트는 여러 개의 요소를 저장할 수 있는 자료형입니다. 
예를 들어 여러가지 과일을 하나의 변수에 저장하고 싶을 때 유용합니다.


# 생성 방법

각 요소들을 대괄호 안에 작성하고 콤마로 구분합니다.

```python
fruits = ["apple", "banana", "cherry"]
```

리스트 생성자로 리스트를 생성할 수도 있습니다. 리스트 생성자에 추가하고 싶은 요소들을 소괄호로 묶어 전달합니다.

```python
fruits = list(("apple", "banana", "cherry")) 
```


# Indexing

인덱스로 리스트의 요소에 접근할 수 있습니다. 리스트의 요소는 0부터 시작한다는 것에 유의하세요.

```python
fruits = ["apple", "banana", "cherry"]

print(fruits[0]) # apple
print(fruits[1]) # banana
print(fruits[2]) # cherry
```


음수 인덱스로도 요소에 접근할 수 있습니다. -1이 마지막 요소를 가리키고 앞으로 이동할 때마다 1씩 감소합니다.

```python
fruits = ["apple", "banana", "cherry"]

print(fruits[-1]) # cherry
print(fruits[-2]) # banana
print(fruits[-3]) # apple
```


# Slicing

시작 또는 끝 인덱스를 지정하여 원하는 만큼 요소를 가져올 수 있습니다.

```
[시작:끝]
```


```python
fruits = ["apple", "banana", "cherry", "orange", "kiwi"]

# 시작 인덱스를 지정한 경우
print(fruits[2:]) # [cherry, orange, kiwi]
print(fruits[:3]) # [apple, banana, cherry]
print(fruits[2:4]) # [cherry, orange]
```


음수 인덱스를 활용할 수도 있습니다. 가장 마지막의 요소의 인덱스가 -1이고 앞으로 올수록 1씩 감소합니다. 다음은 음수 인덱스로 시작과 끝을 지정한 경우입니다.

```python
fruits = ["apple", "banana", "cherry", "orange", "kiwi"]

print(fruits[-3:])
# [cherry, orange, kiwi]

print(fruits[:-2])
# apple, banana, cherry

print(fruits[-3:-1])
# cherry, orange
```


# 요소 바꾸기

인덱스로 바꿀 위치를 지정한 후 원하는 요소의 값을 할당합니다

```python
fruits = ["apple", "banana", "cherry"]

fruits[1] = "mango"

print(fruits) # [apple, mango, cherry]
```


# 요소의 개수 구하기

len 함수를 사용하여 리스트를 구성하는 요소의 개수를 구할 수 있습니다.

```python
fruits = ["apple", "banana", "cherry"]

length = len(fruits) 

print(length) # 3
```


# 리스트 연결하기

리스트를 연결하는 방법은 여러가지가 있지만 가장 많이 사용하는 방법은 + 연산자를 활용하는 것입니다.


```python
fruits = ["apple", "banana", "cherry"]
more = ["mango", "kiwi"]

print(fruits + more) # [apple, banana, cherry, mango, kiwi]
```
