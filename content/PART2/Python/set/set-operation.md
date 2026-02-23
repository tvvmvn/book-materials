# 집합 연산

1. 합집합
2. 교집합
3. 차집합
4. 대칭 차집합


# 합집합

다음은 union() 메서드를 활용한 합집합 연산입니다.
```python
set1 = {1, 2, 3}
set2 = {3, 4, 5}

set3 = set1.union(set2)

print(set3)
# {1, 2, 3, 4, 5}
```

다음은 | 연산자를 활용한 합집합 연산입니다. 결과는 union 메서드를 사용한 것과 같습니다
```python
set1 = {1, 2, 3}
set2 = {3, 4, 5}

set3 = set1 | set2

print(set3)
# {1, 2, 3, 4, 5}
```


# 교집합

다음은 intersection() 메서드를 활용한 교집합 연산입니다
```python
set1 = {1, 2, 3}
set2 = {3, 4, 5}

set3 = set1.intersection(set2)
print(set3)
# {3}
```

다음은 & 연산자를 활용한 교집합 연산입니다
```python
set1 = {1, 2, 3}
set2 = {3, 4, 5}

set3 = set1 & set2
print(set3)
# {3}
```

# 차집합

두 집합 A와 B가 있을 때 A - B를 수행하는 경우, 집합 A에는 있고 집합 B에는 없는 원소들만 추출합니다


다음은 difference()를 활용한 차집합 연산입니다
```python
set1 = {1, 2, 3}
set2 = {3, 4, 5}

set3 = set1.difference(set2)

print(set3)
# 1, 2
```

다음은 - 연산자를 활용한 차집합 연산입니다
```python
set1 = {1, 2, 3}
set2 = {3, 4, 5}

set3 = set1 - set2
print(set3)
# {1, 2}
```


# 대칭 차집합

두 집합에서 중복된 원소만 제거합니다

다음은 symmetric_difference() 메서드를 활용한 대칭 차집합 연산입니다
```python
set1 = {1, 2, 3}
set2 = {3, 4, 5}

set3 = set1.symmetric_difference(set2)

print(set3)
# {1, 2, 4, 5}
```

다음은 ^ 연산자를 활용한 대칭 차집합 연산입니다
```python
set1 = {1, 2, 3}
set2 = {3, 4, 5}

set3 = set1.symmetric_difference(set2)

print(set3)
# {1, 2, 4, 5}
```