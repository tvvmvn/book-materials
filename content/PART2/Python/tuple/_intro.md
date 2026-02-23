# 튜플

1. 튜플 개념
1. 요소에 접근하기
1. 튜플 연결하기
1. 튜플 자르기


# What is tuple

튜플은 여러 개의 값을 저장할 수 있는 자료형입니다.
과일 바구니에 여러 과일을 담는 것처럼 하나의 변수에 여러 개의 값을 저장할 수 있습니다.


# 튜플 생성하기

소괄호안에 값들을 나열하고 콤마로 구분합니다.

```python
fruits = ("apple", "banana", "cherry")
```

튜플 생성자로도 튜플을 생성할 수 있습니다. 소괄호로 묶은 값들을 튜플 생성자에 전달하면 됩니다

```python
fruits = tuple(("apple", "banana", "cherry")) 
```


# 원소의 개수 구하기

튜플을 구성하는 원소의 개수를 길이라고 합니다. len() 메서드로 튜플의 길이를 구할 수 있습니다

```python
fruits = ("apple", "banana", "cherry")

print(len(fruits))
# 3
```


# Concat

리스트와 마찬가지로 + 연산자로 여러 개의 튜플을 합칠 수 있습니다

```python
fruits = ("apple", "banana", "cherry")
more = ("mango", "kiwi")

print(fruits + more) # (apple, banana, cherry, mango, kiwi)
```