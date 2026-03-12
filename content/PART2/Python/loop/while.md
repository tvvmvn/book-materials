# while 문

다음은 while 문의 문법입니다

```
while 반복 조건:
  반복할 작업
```


다음은 i가 6보다 작을때까지 i를 1씩 증가시키며 출력하는 방법입니다.

```py
i = 1

while i < 6:
  print(i, end = '')
  i += 1

# 12345
```

# break

for 문과 마찬가지로 break 키워드를 사용하여 반복을 빠져나올 수 있습니다.

```py
i = 1

while i < 6:
  if i == 3:
    break

  print(i, end = '')
  i += 1

# 12
```


# continue

for 문과 마찬가지로 continue 키워드를 사용하여 현재 반복 회차를 건너뛸 수 있습니다

```py
i = 0

while i < 6:
  i += 1
  
  if i == 3:
    continue

  print(i, end = '')
# 12456
```