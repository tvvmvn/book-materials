# 리스트 자르기

시작 또는 끝의 인덱스를 지정하여 원하는 만큼 요소를 가져올 수 있습니다.

```python
fruits = ["apple", "banana", "cherry", "orange", "kiwi"]

# 시작 인덱스를 지정한 경우
print(fruits[2:])
# [cherry, orange, kiwi]

# 끝 인덱스를 지정한 경우
result = fruits[:3]
# [apple, banana, cherry]

# 시작과 끝 인덱스를 지정한 경우
result = fruits[2:4]
# [cherry, orange]
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