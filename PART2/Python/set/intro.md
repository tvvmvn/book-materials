# Set

수학의 집합(Set)을 구현한 자료형입니다. 강력한 집합 연산을 기능을 제공합니다.


# Set 생성하기

중괄호 안에 요소들을 작성하고 콤마로 구분합니다. Set은 순서가 없으므로 어떻게 출력될지 알 수 없습니다.

```python
set = {7, 4, 2}

print(set)
# {2, 4, 7}
```


# 중복 불가

Set은 중복을 허용하지 않는다는 사실에 주의하세요.
```python
fruits = {"apple", "banana", "cherry", "apple"}

print(fruits) # {'cherry', 'apple', 'banana'}
print(len(fruits))#3
```


# 생성자로 Set 생성하기

set 생성자로 set을 생성할 수도 있습니다. set 생성자에 요소들을 소괄호로 묶어 전달하면 됩니다.
```python
fruits = set(("apple", "banana", "cherry")) 
```


# 길이 구하기

Set에서 원소의 개수를 length라고 합니다. len() 메서드로 Set의 길이를 구할 수 있습니다.

```python
fruits = {"apple", "banana", "cherry"}

print(len(fruits))
# 3
```


# Set과 멤버십 연산자

특정 요소가 있는지 확인할 수 있습니다.

```python
fruits = {"apple", "banana", "cherry"}

print("banana" in fruits) # True
print("banana" not in fruits) # False
```
