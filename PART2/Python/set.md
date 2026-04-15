# Set

수학의 집합(Set)을 구현한 자료형입니다. 강력한 집합 연산을 기능을 제공합니다.

- Set
- 집합 연산
- 메서드


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


# 집합 연산 (Set Operation)

- 합집합 (Union)
- 교집합 (Intersection)
- 차집합 (Difference)
- 대칭 차집합 (Symmetric Difference)


# 합집합

union 메서드 또는 | 연산자를 사용합니다.

```python
a = {1, 2, 3}
b = {3, 4, 5}

print(a.union(b))# {1, 2, 3, 4, 5}
print(a | b)# {1, 2, 3, 4, 5}
```


# 교집합

intersection메서드 또는 & 연산자를 사용합니다

```python
a = {1, 2, 3}
b = {3, 4, 5}

print(a.intersection(b))# {3}
print(a & b)# {3}
```


# 차집합

difference 메서드 또는 - 연산자를 사용합니다.

```python
a = {1, 2, 3}
b = {3, 4, 5}

print(a.difference(b))# {1, 2}
print(a - b)# {1, 2}
```


# 대칭 차집합

symmetric_difference 메서드 또는 ^ 연산자를 사용합니다.

```python
a = {1, 2, 3}
b = {3, 4, 5}

print(a.symmetric_difference(b))# {1, 2, 4, 5}
print(a ^ b)# {1, 2, 4, 5}
```


# Set Methods

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