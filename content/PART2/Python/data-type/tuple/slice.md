# 튜플 자르기

리스트와 마찬가지로 튜플 자르기 또한 가능합니다.

```python
fruits = ("apple", "banana", "cherry", "orange", "kiwi")

print(fruits[2:])
# (cherry, orange, kiwi)
print(fruits[:3])
# (apple, banana, cherry)
print(fruits[2:4])
# (cherry, orange)
```

마찬가지로 음수 인덱스를 활용할수도 있습니다

```python
fruits = ("apple", "banana", "cherry", "orange", "kiwi")

print(fruits[-4:-1])
# (banana, cherry, orange)
```