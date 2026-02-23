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
