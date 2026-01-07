# for 문

다음은 for문의 문법입니다

```
for 그 중 하나(순서대로) in 모음:
  반복적으로 수행할 작업
```

- 기본 사용하기
- break
- continue


반복문을 사용하여 리스트를 순회하는 경우이며 가장 흔히 볼 수 있는 반복문의 사용법입니다.

```py
fruits = ["apple", "banana", "cherry"]

for fruit in fruits:
  print(fruit)
```

문자열 순회에도 사용할 수 있습니다.

```py
for c in "banana":
  print(c)
```

다른 언어와 파이썬의 큰 차이점 중 하나입니다. Range와 함께 반복문을 사용하는 경우입니다. 

```python
for n in range(6):
  print(n)
```

break는 반복문을 빠져나오는 키워드입니다. 주로 조건문과 함께 사용됩니다.

```py
# apple만 출력이 됩니다
fruits = ["apple", "banana", "cherry"]

for fruit in fruits:
  if fruit == "banana":
    break

  print(fruit)
```

continue는 현재 회차를 건너뜁니다. 마찬가지로 조건문과 함께 사용됩니다.

```py
fruits = ["apple", "banana", "cherry"]

# banana만 출력되지 않습니다
for fruit in fruits:
  if fruit == "banana":
    continue

  print(fruit)
```