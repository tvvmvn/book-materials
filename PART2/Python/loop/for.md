# for 문

다음은 for문의 문법입니다

```
for 그 중 하나(순서대로) in 모음:
  반복적으로 수행할 작업
```

다른 언어와 파이썬의 큰 차이점 중 하나입니다. Range와 함께 반복문을 사용하는 경우입니다. 

```python
for i in range(5):
  print(i, 'times executed') 
```


# break

break는 반복문을 빠져나오는 키워드입니다. 주로 조건문과 함께 사용됩니다.

```py
for i in range(5):
  if i == 3:
    break
  print(i)
```


# continue

continue는 현재 회차를 건너뜁니다. 마찬가지로 조건문과 함께 사용됩니다.

```py
for i in range(5):
  if i == 3:
    continue
  print(i)
```