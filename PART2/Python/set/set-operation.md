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